
#ifndef HELLO_VULKAN_VK_DEBUG_H
#define HELLO_VULKAN_VK_DEBUG_H

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

VkResult CreateDebugUtilsMessengerEXT(VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkDebugUtilsMessengerEXT* pDebugMessenger);

void DestroyDebugUtilsMessengerEXT(VkInstance instance, VkDebugUtilsMessengerEXT debugMessenger, const VkAllocationCallbacks* pAllocator);

#endif //HELLO_VULKAN_VK_DEBUG_H
