@echo off
set glslc_exe=%1

md "./cmake-build-debug/shaders"

%glslc_exe% ./src/shaders/shader.vert -o ./cmake-build-debug/shaders/vert.spv
%glslc_exe% ./src/shaders/shader.frag -o ./cmake-build-debug/shaders/frag.spv

echo shaders compiled
