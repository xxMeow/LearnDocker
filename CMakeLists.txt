cmake_minimum_required(VERSION 3.15)

project(Mocker)
string(TIMESTAMP COMPILE_TIME %Y/%m%d-%H:%M:%S)

set(SRC_LIST main.cpp)

message(STATUS " | Project: " ${PROJECT_NAME})
message(STATUS " | Compile Time: " ${COMPILE_TIME})
message(STATUS " | Binary Dir: " ${PROJECT_BINARY_DIR})
message(STATUS " | Source Dir: " ${PROJECT_SOURCE_DIR})

add_executable(${PROJECT_NAME} ${SRC_LIST})