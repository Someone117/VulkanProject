#ifndef VULKAN_SETTINGS_H
#define VULKAN_SETTINGS_H

#pragma once


#include "../util/Includes.h"

namespace Infinite {
    const uint32_t WIDTH = 800;
    const uint32_t HEIGHT = 600;
    extern VkSampleCountFlagBits msaaSamples;
    extern uint32_t mipLevels;

    static VkPresentModeKHR PRESENT_MODE = VK_PRESENT_MODE_IMMEDIATE_KHR; // VK_PRESENT_MODE_MAILBOX_KHR;


    const int MAX_FRAMES_IN_FLIGHT = 2;

//    class Settings {
//    private:
//
//
//    public:
//        Settings();
//
//        void setMsaaSamples(VkSampleCountFlagBits msaaSamples);
//
//        float mipBias;
//        VkSamplerMipmapMode mipMode = VK_SAMPLER_MIPMAP_MODE_LINEAR;
//        uint32_t maxMipLevels;
//        uint16_t screenFlags;
//        float minSampleShading;
//
//        const uint16_t SCREEN_FLAG_VSYNC = 0x1;
//        const uint16_t SCREEN_FLAG_TRIPLE_BUFFERING = 0x10;
//        const uint16_t SCREEN_FLAG_FULL_SCREEN = 0x100;
//        const uint16_t MOUSE_RAW_INPUT = 0x1000;
//    };
}


#endif //VULKAN_SETTINGS_H
