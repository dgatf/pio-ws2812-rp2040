#ifndef WS2812_H
#define WS2812_H

#ifdef __cplusplus
extern "C" {
#endif

#include "hardware/pio.h"

void ws2812_init(PIO pio, uint pin, float freq);
void put_pixel_rgb(uint8_t r, uint8_t g, uint8_t b);

#ifdef __cplusplus
}
#endif

#endif