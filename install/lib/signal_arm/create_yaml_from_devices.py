#!/usr/bin/env python3

import subprocess
import glob
import yaml

def get_device_info(device):
    # 使用 udevadm 获取设备信息
    result = subprocess.run(['udevadm', 'info', '-q', 'property', '-n', device], capture_output=True, text=True)
    output = result.stdout

    # 初始化信息字典
    info = {'VID': None, 'PID': None, 'SerialNumber': None, 'Symlink': None, 'ACM': device.split('/')[-1]}

    # 解析信息
    for line in output.split('\n'):
        if 'ID_VENDOR_ID' in line:
            info['VID'] = line.split('=')[1]
        if 'ID_MODEL_ID' in line:
            info['PID'] = line.split('=')[1]
        if 'ID_SERIAL_SHORT' in line:
            info['SerialNumber'] = line.split('=')[1]

    return info

def create_yaml_config(devices, output_file):
    devices_info = {'devices': []}
    for device in devices:
        info = get_device_info(device)
        if info['VID'] and info['PID']:  # 确保设备信息完整
            devices_info['devices'].append(info)

    # 写入 YAML 文件
    with open(output_file, 'w') as file:
        yaml.dump(devices_info, file, default_flow_style=False)

    print(f"配置已保存到 {output_file}")

# 查找所有的 ttyACM 设备
acm_devices = glob.glob('/dev/ttyACM*')

# 创建 YAML 配置文件
output_yaml_path = 'devices_config.yaml'
create_yaml_config(acm_devices, output_yaml_path)
