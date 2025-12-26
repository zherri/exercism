#include "resistor_color_duo.h"

uint16_t color_code(resistor_band_t colors[]) {
    return (uint8_t)colors[0] * 10 + (uint8_t)colors[1];
}
