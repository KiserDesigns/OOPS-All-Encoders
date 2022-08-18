/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4B44
#define PRODUCT_ID      0x6145
#define DEVICE_VER      0x0001
#define MANUFACTURER    Kiser Designs
#define PRODUCT         OOPS! All Encoders

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS { GP23, GP24, GP20, GP29, GP16, GP17, GP13, GP15 }
#define MATRIX_COL_PINS { GP25, GP0, GP1, GP4, GP8, GP10 }

#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define ENCODERS_PAD_A { GP26, GP3,  GP2,  GP5,  GP6,  GP9, \
                         GP26, GP3,  GP2,  GP5,  GP6,  GP9, \
                         GP26, GP3,  GP2,  GP5,  GP6,  GP9, \
                         GP26, GP3,  GP2,  GP5,  GP6,  GP9, \
                         GP26, GP3,  GP2,  GP5,  GP6,  GP9, \
                         GP26, GP3,  GP2,  GP5,  GP6,  GP9, \
                         GP26, GP3,  GP2,  GP5,  GP6,  GP9, \
                         GP26, GP3,  GP2,  GP5,  GP6,  GP9  }
#define ENCODERS_PAD_B { GP21, GP21, GP21, GP21, GP21, GP21, \
                         GP28, GP28, GP28, GP28, GP28, GP28, \
                         GP19, GP19, GP19, GP19, GP19, GP19, \
                         GP27, GP27, GP27, GP27, GP27, GP27, \
                         GP12, GP12, GP12, GP12, GP12, GP12, \
                         GP11, GP11, GP11, GP11, GP11, GP11, \
                         GP18, GP18, GP18, GP18, GP18, GP18, \
                         GP14, GP14, GP14, GP14, GP14, GP14  }
#define ENCODER_RESOLUTION 4