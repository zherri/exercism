#include "darts.h"

uint8_t score(coordinate_t position) {
    if (fabsf(position.x) == fabsf(position.y)) {
        float n = fabsf(position.x);
        
        if (n < 0.8F)
            return 10;
        if (n <= 3.5F)
            return 5;
        if (n <= 7.0F)
            return 1;
        
        return 0;
    }

    if (fabsf(position.x) > fabsf(position.y)) {
        return verify_pos(fabsf(position.x));
    } else {
        return verify_pos(fabsf(position.y));
    }
}

uint8_t verify_pos(float n) {
    if (n <= 1.0F)
        return 10;
    if (n <= 5.0F)
        return 5;
    if (n <= 10.0F)
        return 1;

    return 0;
}
