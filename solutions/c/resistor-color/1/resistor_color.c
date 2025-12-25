#include "resistor_color.h"

static const resistor_band_t BANDS_BY_VALUE[] = {BLACK, BROWN, RED, ORANGE, YELLOW,
                                                GREEN, BLUE, VIOLET, GREY, WHITE};

int color_code(resistor_band_t color) {
    return color;
}

resistor_band_t* colors() {
    return (resistor_band_t*)BANDS_BY_VALUE;
}
