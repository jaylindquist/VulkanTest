@echo off
set VULKAN_PATH=D:\Libraries\VulkanSDK\1.1.70.1\Bin
%VULKAN_PATH%\glslangValidator.exe -V shader.vert
%VULKAN_PATH%\glslangValidator.exe -V shader.frag
