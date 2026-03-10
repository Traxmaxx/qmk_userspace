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
/* 1000Hz polling rate (1ms) */
#define USB_POLLING_INTERVAL_MS 1

/* Comboterm timeout
 * 35–40 if you press slowly
 */
#define COMBO_TERM 30
/* Trackball DPI
 * Total range from 400 to 3,400 (400 → 600 → 800 → … → 3,400)
 */
#define CHARYBDIS_MINIMUM_DEFAULT_DPI 2600

/* Pointing Device Acceleration Configuration
 * Taken from drashna/qmk_modules
 *
 */
#define POINTING_DEVICE_ACCEL_TAKEOFF 2.0      // lower/higher value = curve takes off more smoothly/abruptly
#define POINTING_DEVICE_ACCEL_GROWTH_RATE 0.25 // lower/higher value = curve reaches its upper limit slower/faster
#define POINTING_DEVICE_ACCEL_OFFSET 2.2       // lower/higher value = acceleration kicks in earlier/later
#define POINTING_DEVICE_ACCEL_LIMIT 0.2        // lower limit of accel curve (minimum acceleration factor)


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

/* Enable speculative key hold for better typing experience
 * When a mod-tap key is pressed, the modifier is applied immediately.
 * Supposing the mod-tap key is latter settled as tapped, the modifier is cancelled before sending the tapping key.
 **/

#define SPECULATIVE_HOLD

/*  In its most basic description, a mod-tap key acts as the "mod" when held longer than the TAPPING_TERM
 *  and otherwise as another function, such as a letter key, when held for less than that.
 *  Like urob says, it is challenging to type with such consistent timing to use mod-tap keys based on this rule alone.
 *  This motivates a "timeless" configuration where how long keys are held does not matter.
 *  This is done by setting the TAPPING_TERM to a generous value, like 250 ms, or even larger
 **/

#define TAPPING_TERM 250


/* Charybdis-specific features. */

#ifdef POINTING_DEVICE_ENABLE
// QMK Automatic Mouse Layer - activates pointer layer on trackball movement
#    define POINTING_DEVICE_AUTO_MOUSE_ENABLE
#    define AUTO_MOUSE_DEFAULT_LAYER 3
#    define AUTO_MOUSE_TIME 2000           // Layer active duration (ms)
#    define AUTO_MOUSE_THRESHOLD 10        // Movement required to trigger
#    define AUTO_MOUSE_DELAY 200           // Lockout after non-mouse key press (ms)
// Natural scrolling (macOS style) for drag scroll
#    define CHARYBDIS_DRAGSCROLL_REVERSE_Y
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
