#include "eliuds_eggs.h"

uint8_t egg_count(int num) {
    uint8_t counter = 0;
    int sum = 0, tmp = 0;
    int i = (int)log2(num);
    
    while (i >= 0) {
        tmp = 1ull << i;
        if (sum + tmp <= num) {
            sum += tmp;
            counter++;
        }
        i--;
    }

    return counter;
}
