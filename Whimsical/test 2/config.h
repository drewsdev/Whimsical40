//Copyright 2022 DreamKeys (1drew)

#pragma once

/* Ensure we jump to bootloader if the RESET keycode was pressed */
#define EARLY_INIT_PERFORM_BOOTLOADER_JUMP TRUE

/* LSE clock */
#define STM32_LSECLK 32768

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1D1D
#define PRODUCT_ID      0x001A
#define DEVICE_VER      0x001A
#define MANUFACTURER    DreamKeys
#define PRODUCT         Whimsical40

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 13

#define MATRIX_ROW_PINS { B0, D2, B5, F4 }
#define MATRIX_COL_PINS { B4, B7, D7, D6, D4, D5, D3, F5, B6, F6, F7, C7, C6 }
#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A { F0 }
#define ENCODERS_PAD_B { F1 }

#define ENCODER_RESOLUTION 2

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

// configure oled driver for the 128x32 oled
#define OLED_UPDATE_INTERVAL 66 // ~15fps

// OLED_TIMEOUT is incompatible with the OLED_OFF mode
#define OLED_TIMEOUT 0

// OLED timeout reimplemented in the keyboard-specific code
#define CUSTOM_OLED_TIMEOUT 60000

// Custom config starts after VIA's EEPROM usage,
// dynamic keymaps start after this.
// Custom config Usage:
// 1 for enabled encoder modes (1 byte)
// 1 for custom backlighting controls (1 byte)
// 1 for OLED default mode (1 byte)
// 6 for 3x custom encoder settings, left, right, and press (18 bytes)
#define VIA_EEPROM_CUSTOM_CONFIG_SIZE 21

// VIA lighting is handled by the keyboard-level code
#define VIA_CUSTOM_LIGHTING_ENABLE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
