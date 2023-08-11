cmake_minimum_required(VERSION 3.0)
project(gittest)

include_directories(${PROJECT_SOURCE_DIR}/include)

aux_source_directory(${PROJECT_SOURCE_DIR} SRC_LIST)

add_executable(app ${SRC_LIST})
