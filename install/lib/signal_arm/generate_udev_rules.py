#!/usr/bin/env python3
import yaml

def generate_udev_rules(config_path, output_path):
    # 读取配置文件
    with open(config_path, 'r') as file:
        config = yaml.safe_load(file)

    # 生成规则字符串
    rules = []
    for device in config['devices']:
        rule = (
            f'SUBSYSTEM=="tty", ATTRS{{idVendor}}=="{device["VID"]}", '
            f'ATTRS{{idProduct}}=="{device["PID"]}", '
            f'ATTRS{{serial}}=="{device["SerialNumber"]}", '
            f'SYMLINK+="{device["Symlink"]}"\n'
        )
        rules.append(rule)

    # 将规则写入文件
    with open(output_path, 'w') as file:
        file.writelines(rules)
    print(f"udev规则已生成到：{output_path}")

# 使用示例
config_file_path = 'devices_config.yaml'
output_file_path = 'serial.rules'
generate_udev_rules(config_file_path, output_file_path)
