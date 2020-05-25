cmake_minimum_required(VERSION 3.16.5)
set(CMAKE_CXX_STANDARD 17)
set(PROJECT_NAME hello_vulkan)


project(${PROJECT_NAME})

message("Finding executables to build...")

file(GLOB_RECURSE source_files src/*.cpp)
foreach(source_file ${source_files})
    message("\t${source_file}")
endforeach()
add_executable(${PROJECT_NAME} ${source_files})

message("Setting up dependencies...")
# Vulkan setup
find_package(Vulkan REQUIRED FATAL_ERROR)
target_link_libraries(${PROJECT_NAME} Vulkan::Vulkan)


# GLFW setup
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory($ENV{GLFW_PATH_SOURCE} $ENV{GLFW_PATH_BIN})
target_link_libraries(${PROJECT_NAME} glfw)

message("Done.")

# TODO GLM setup
