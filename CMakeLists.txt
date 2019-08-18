cmake_minimum_required(VERSION 3.12)
project(tlpi)

set(CMAKE_CXX_STANDARD 11)
set(BUILD_DIR ${PROJECT_SOURCE_DIR})  #设置编译目录,也就是Makefile文件所在目录
message(${BUILD_DIR}) #打印目录路径
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c99")
add_custom_target(tlpi COMMAND make -C ${BUILD_DIR}) #最关键的就是这句, 设置外部编译文件而不是使用CMakeLists.txt

include_directories(${CMAKE_SOURCE_DIR}/lib)

FILE(GLOB MyCSources ./**/*.c)
message(${MyCSources})
add_executable(source_inteligence  ${MyCSources})

add_executable(mysignals signals/mysignals.c)