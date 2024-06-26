#ifndef VULKAN_COMMANDBUFFER_H
#define VULKAN_COMMANDBUFFER_H

#pragma once

#include <vector>
#include <vulkan/vulkan.h>

namespace Infinite {
struct CommandBuffer {
  std::vector<VkCommandBuffer> commandBuffers;

  void create(VkCommandPool &pool, VkDevice device);
};

} // namespace Infinite

#endif // VULKAN_COMMANDBUFFER_H
