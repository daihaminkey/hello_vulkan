cmake_minimum_required(VERSION 3.16.5)
set(CMAKE_CXX_STANDARD 17)
set(PROJECT_NAME hello_vulkan)


project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} src/main.cpp)


# Vulkan setup
find_package(Vulkan REQUIRED FATAL_ERROR)
target_link_libraries(${PROJECT_NAME} Vulkan::Vulkan)


# GLFW setup
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory($ENV{GLFW_PATH_SOURCE} $ENV{GLFW_PATH_BIN})
target_link_libraries(${PROJECT_NAME} glfw)

# TODO GLM setup
