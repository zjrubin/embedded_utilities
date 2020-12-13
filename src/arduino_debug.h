#pragma once

#include <stdio.h>

#ifdef ARDUINO_DEBUG
#define DEBUG_TEST 1
#else
#define DEBUG_TEST 0
#endif

#define DEBUG_OUTPUT_MAX_SIZE 100

#define debug_serial_printf(message, ...)                                      \
    do {                                                                       \
        if (DEBUG_TEST) {                                                      \
            Serial.printf("%s line:%d: " message, __func__, __LINE__,          \
                          __VA_ARGS__);                                        \
        }                                                                      \
    } while (0)

#define debug_serial_printfln(message, ...)                                    \
    debug_serial_printf(message, __VA_ARGS__)

#define debug_serial_println(message)                                          \
    do {                                                                       \
        if (DEBUG_TEST) {                                                      \
            Serial.println(message);                                           \
        }                                                                      \
    } while (0)

#define debug_serial_print(message)                                            \
    do {                                                                       \
        if (DEBUG_TEST) {                                                      \
            Serial.print(message);                                             \
        }                                                                      \
    } while (0)
