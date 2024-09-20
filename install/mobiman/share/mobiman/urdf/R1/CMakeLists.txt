cmake_minimum_required(VERSION 2.8.3)

project(URDF_R1_V1_0_4)


foreach(dir config launch meshes urdf)
	install(DIRECTORY ${dir}/
		DESTINATION share/mobiman/${dir})
endforeach(dir)
