#pragma once

#define SPLIT_USB_DETECT
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_MODS_ENABLE
#define SPLIT_WPM_ENABLE
#define SPLIT_POINTING_ENABLE

#define SERIAL_USART_TX_PIN GP7
#define SERIAL_USART_RX_PIN GP8

// 左键盘 RGB 引脚定义
#ifdef LEFT_HAND
#define WS2812_DI_PIN GP26
#endif

// 右键盘 RGB 引脚定义
#ifdef RIGHT_HAND
#define WS2812_DI_PIN GP4
#endif
