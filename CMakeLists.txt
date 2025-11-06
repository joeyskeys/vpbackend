cmake_minimum_required(VERSION 3.25)

cmake_policy(SET CMP0074 NEW)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/cmake)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS Debug Release RelWithDebInfo MinSizeRel)

project(vpbackend)

find_package(GLFW)
if (GLFW_FOUND)
    add_subdirectory(gui)
endif()

add_subdirectory(src)
add_subdirectory(tests)