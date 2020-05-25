@echo off
set glslc_exe=%1

%glslc_exe% shader.vert -o vert.spv
%glslc_exe% shader.frag -o frag.spv

echo shaders compiled
