#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
    // FrameBuffers
    "/sys/devices/virtual/graphics/fb0",

    // Storage Devices
    "/sys/dev/block*",
    "/sys/devices/platform/msm_sdcc.1*",
    "/sys/devices/platform/msm_sdcc.3*",
    "/sys/devices/platform/msm_hsusb_host*",
    "/sys/devices/virtual/misc/fuse",

    // Inputs
    "/sys/devices/platform/gpio-keys.0/input*",
    "/sys/devices/virtual/input*",
    "/sys/devices/virtual/misc/uinput",

    // ADB
    "/sys/class/tty/ptmx",
    "/sys/class/misc/android_adb",
    "/sys/class/android_usb/android0/f_adb",
    NULL
};
