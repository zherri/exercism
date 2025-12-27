#include "binary.h"

int convert(const char *input) {
    const int input_len = strlen(input);
    int decimal = 0;
    
    for (int i = input_len - 1; i >= 0; i--) {
        if (input[i] != '1' && input[i] != '0')
            return INVALID;
        
        if (input[i] == '1') {
            decimal += 1 << (input_len - i - 1);
        }
    }

    return decimal;
}
