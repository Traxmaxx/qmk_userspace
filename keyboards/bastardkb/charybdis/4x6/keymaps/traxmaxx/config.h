/**
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

/* Improve responsiveness */
/* Reduce debounce time */
#define DEBOUNCE 3
/* enable symm debounce algorithm */
/* #define DEBOUNCE_TYPE sym_eager_pk
/* 1000Hz polling rate (1ms) */

#define USB_POLLING_INTERVAL_MS 1
/* Improve clock speed for faster matrix scanning
 * Lsuffix makes sure it's of type long
 */
#define F_CPU 200000000L
#define DIODE_DIRECTION ROW2COL

/* Comboterm timeout
 * 35–40 if you press slowly
 */
#define COMBO_TERM 35
/* Trackball DPI
 * Total range from 400 to 3,400 (400 → 600 → 800 → … → 3,400)
 */
#define CHARYBDIS_MINIMUM_DEFAULT_DPI 3400


#define VIAL_KEYBOARD_UID {0x92, 0x6A, 0xAC, 0xFB, 0x57, 0x12, 0x42, 0x19}

#define VIAL_UNLOCK_COMBO_ROWS \
    { 0, 5 }
#define VIAL_UNLOCK_COMBO_COLS \
    { 0, 0 }

#define DYNAMIC_KEYMAP_LAYER_COUNT 4

#ifndef __arm__
/* Disable unused features. */
#    define NO_ACTION_ONESHOT
#endif // __arm__

/* Charybdis-specific features. */

#ifdef POINTING_DEVICE_ENABLE
// Automatically enable the pointer layer when moving the trackball.  See also:
#    define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE
// Natural scrolling (macOS style) for drag scroll
#    define CHARYBDIS_DRAGSCROLL_REVERSE_Y
#    define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_TIMEOUT_MS 1600
#    define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_THRESHOLD 400
#    define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_WINDOW_MS 600
#endif // POINTING_DEVICE_ENABLE

// limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
#define RGB_MATRIX_LED_PROCESS_LIMIT 15
// Maintain compatibility with the keyboard's RGB Matrix settings
#define RGB_MATRIX_SLEEP
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
// Disable RGB when USB is suspended to save power
#define RGB_DISABLE_WHEN_USB_SUSPENDED true
// Enable disabling of unmapped keys per layer
#define RGB_MATRIX_KEYRELEASES
#define RGB_MATRIX_TIMEOUT 0
#define RGB_MATRIX_DISABLE_KEYCODES
// Layer-specific lighting configuration
#define RGB_MATRIX_LAYER_INDICATORS
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 50
