/*
Copyright 2018 Holten Campbell

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x5052
#define PRODUCT_ID      0x6580
#define DEVICE_VER      0x0001
#define MANUFACTURER    PrimeKB
#define PRODUCT         Prime_BLE
#define DESCRIPTION     Ergo

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 9

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { D7, B6, F6, F7, F5, F4, B5, D6 }
#define MATRIX_COL_PINS { B0, F0, F1, C7, C6, D0, D1, D2, D3 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/*
#define BACKLIGHT_PIN B7
#define BACKLIGHT_LEVELS 5
*/

/*Bluetooth */
#define AdafruitBleResetPin D4
#define AdafruitBleCSPin B4
#define AdafruitBlEIRQPin E6

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define DYNAMIC_KEYMAP_LAYER_COUNT 4

// EEPROM usage

// TODO: refactor with new user EEPROM code (coming soon)
#define EEPROM_MAGIC 0x451F
#define EEPROM_MAGIC_ADDR 32
// Bump this every time we change what we store
// This will automatically reset the EEPROM with defaults
// and avoid loading invalid data from the EEPROM
#define EEPROM_VERSION 0x08
#define EEPROM_VERSION_ADDR 34

// Dynamic keymap starts after EEPROM version
#define DYNAMIC_KEYMAP_EEPROM_ADDR 35
// Dynamic macro starts after dynamic keymaps (35+(4*10*9*2)) = (35+576)
#define DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR 611
#define DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE 413    // 1024-DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR
#define DYNAMIC_KEYMAP_MACRO_COUNT 16