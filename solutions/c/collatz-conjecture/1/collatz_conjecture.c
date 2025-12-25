#include "collatz_conjecture.h"

int steps(int start) {
    if (start <= 0)
        return ERROR_VALUE;
    
    int counter = 0;
    int act_number = start;

    while (act_number != 1) {
        if (act_number % 2 == 0) {
            act_number = act_number / 2;
        } else {
            act_number = act_number * 3 + 1;
        }

        counter++;
    }

    return counter;
}
