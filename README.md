## RGB led WS2812 library for RP2040 using PIO

A library that implements the WS2812 RGB LED for the RP2040 using PIO. It is compatible with the [SDK](https://raspberrypi.github.io/pico-sdk-doxygen/) and [Arduino](https://github.com/earlephilhower/arduino-pico).

How to use it:

- With SDK. Add *ws2812.pio, ws2812.h and ws2812.c* to your project. Modify CMakeLists.txt. Add *pico_generate_pio_header* and the required libraries (pico_stdlib, hardware_pio, hardware_clocks). See [CMakeLists.txt](sdk/CMakeLists.txt)
- With Arduino. Add *ws2812.pio.h, ws2812.h and ws2812.c* to your project  


Functions:  

**void ws2812_init(PIO pio, uint pin)**  

Loads the pio program

Parameters:  
&nbsp;&nbsp;**pio** - load the pio program at pio0 or pio1  
&nbsp;&nbsp;**pin** - set data pin  
\
**void put_pixel_rgb(uint r, uint g, uint b)**  

Set led rgb color

Parameters:  
&nbsp;&nbsp;**r, g, b** - rgb colors  

