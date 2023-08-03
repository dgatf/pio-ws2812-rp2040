/*
 * -------------------------------------------------------------------------------
 * 
 * Copyright (c) 2023, Daniel Gorbea
 * All rights reserved.
 *
 * This source code is licensed under the MIT-style license found in the
 * LICENSE file in the root directory of this source tree. 
 * 
 * -------------------------------------------------------------------------------
 * 
 *  Library to control the led rgb WS2812
 * 
 *  Data pin is GPIO16 for RP2040 Zero
 * 
 * -------------------------------------------------------------------------------
 */

#include "ws2812.h"

int64_t alarm_callback(alarm_id_t id, void *user_data)
{
    uint8_t red, green, blue;
    red = rand();
    green = rand();
    blue = rand();
    put_pixel_rgb(red / 4, green / 4, blue / 4);
    return 500 * 1000;
}

void setup()
{   
    PIO pio = pio0;        // values: pio0, pio1
    const uint WS2812_PIN = 16;
    
    ws2812_init(pio, WS2812_PIN, 800000);
    add_alarm_in_ms(500, alarm_callback, NULL, false);
}

void loop()
{
}
