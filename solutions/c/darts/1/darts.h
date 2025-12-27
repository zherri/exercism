#ifndef DARTS_H
#define DARTS_H

#include <stdint.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} coordinate_t;

uint8_t score(coordinate_t position);
uint8_t verify_pos(float n);

#endif
