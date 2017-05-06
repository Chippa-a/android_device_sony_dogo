ifeq ($(WITH_TWRP),true)
BOARD_USE_CUSTOM_RECOVERY_FONT := \"roboto_15x24.h\"
TW_BRIGHTNESS_PATH := "/sys/devices/i2c-0/0-0036/leds/lm3533-lcd-bl/brightness"
TW_THEME := portrait_hdpi
endif
