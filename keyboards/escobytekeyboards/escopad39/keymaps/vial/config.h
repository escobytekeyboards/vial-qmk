// Copyright 2024 Escobyte Keyboards (@pabloescobyte)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

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

// Vial
#define VIAL_KEYBOARD_UID {0x13, 0xDE, 0xD4, 0xA8, 0xEA, 0x31, 0x19, 0xE8}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

#define ENCODERS_PAD_A { GP15 }
#define ENCODERS_PAD_B { GP26 }
#define TAPPING_TOGGLE 2