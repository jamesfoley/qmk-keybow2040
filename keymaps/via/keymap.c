// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_4x4(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO
    )
};

const is31_led PROGMEM g_is31_leds[RGB_MATRIX_LED_COUNT] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |      G location
 *   |  |      |      B location
 *   |  |      |      | */
    {0, C9_1,  C3_1,  C5_1},
    {0, C9_2,  C3_2,  C5_2},
    {0, C9_3,  C2_2,  C5_3},
    {0, C9_4,  C2_3,  C5_4},
    
    {0, C8_1,  C6_1,  C7_1},   
    {0, C8_2,  C6_2,  C7_2},   
    {0, C8_3,  C6_3,  C7_3},   
    {0, C8_4,  C6_4,  C7_4},   
    
    {0, C9_9,  C3_9,  C5_9},   
    {0, C9_10, C3_10, C5_10},   
    {0, C9_11, C2_10, C5_11},   
    {0, C9_12, C2_11, C5_12},      
    
    {0, C8_9,  C6_9,  C7_9},   
    {0, C8_10, C6_10, C7_10},   
    {0, C8_11, C6_11, C7_11},   
    {0, C8_12, C6_12, C7_12},   
};

led_config_t g_led_config = { 
    {
        // Key Matrix to LED Index
        { 12, 8, 4, 0 },
        { 13, 9, 5, 1 },
        { 14, 10, 6, 2 },
        { 15, 11, 7, 3 }
    }, 
    {
        // LED Index to Physical Position
        { 224,  0 },
        { 224,  21 },
        { 224,  43 },
        { 224,  64 },

        { 149,  0 },
        { 149,  21 },
        { 149,  43 },
        { 149,  64 },

        { 75,  0 },
        { 75,  21 },
        { 75,  43 },
        { 75,  64 },

        { 0,  0 },
        { 0,  21 },
        { 0,  43 },
        { 0,  64 },
    }, 
    {
        // LED Index to Flag
        4, 4, 4, 4,
        4, 4, 4, 4,
        4, 4, 4, 4,
        4, 4, 4, 4,
    }
};
