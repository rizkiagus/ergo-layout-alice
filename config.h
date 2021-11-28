#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCA04
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER bt66tech
#define PRODUCT ergobox 

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16


#define MATRIX_ROW_PINS { B10, B1, B0, A7, A0 }
// #define MATRIX_COL_PINS { A3, A6, A5, A4, A2, A1, B7, B8, B3, A8, B6, B4, B5, A9, B9,  }
#define MATRIX_COL_PINS { A3, A6, A5, A4, A2, A1, B7, B8, B3, A8, B6, B4, B5, A9, B9, A15 }
// #define MATRIX_ROW_PINS { B10, B1, B0, A7, A6 }
#define UNUSED_PINS
#define DIODE_DIRECTION COL2ROW

// #define BACKLIGHT_PIN A8
// #define BACKLIGHT_PWM_DRIVER PWMD1
// #define BACKLIGHT_PWM_CHANNEL 1
// #define BACKLIGHT_LEVELS 6
// #define BACKLIGHT_BREATHING
// #define BREATHING_PERIOD 6

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGBLIGHT_ANIMATIONS
#define RGB_DI_PIN C15
#define RGBLED_NUM 20
// #define WS2812_SPI SPID2
// #define WS2812_SPI_MOSI_PAL_MODE 5
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */
/*
 * Force NKRO
 *
 * Force NKRO (nKey Rollover) to be enabled by default, regardless of the saved
 * state in the bootmagic EEPROM settings. (Note that NKRO must be enabled in the
 * makefile for this to work.)
 *
 * If forced on, NKRO can be disabled via magic key (default = LShift+RShift+N)
 * until the next keyboard reset.
 *
 * NKRO may prevent your keystrokes from being detected in the BIOS, but it is
 * fully operational during normal computer usage.
 *
 * For a less heavy-handed approach, enable NKRO via magic key (LShift+RShift+N)
 * or via bootmagic (hold SPACE+N while plugging in the keyboard). Once set by
 * bootmagic, NKRO mode will always be enabled until it is toggled again during a
 * power-up.
 *
 */
#define FORCE_NKRO


/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
