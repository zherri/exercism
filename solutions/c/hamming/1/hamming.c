#include "hamming.h"

int compute(const char *lhs, const char *rhs) {
    if (*lhs == '\0' && *rhs == '\0')
        return 0;
    if (*lhs == '\0' || *rhs == '\0')
        return -1;
    if (strlen(lhs) != strlen(rhs))
        return -1;

    int counter = 0;

    for (size_t i = 0; i < strlen(lhs); i++) {
        if (lhs[i] != rhs[i])
            counter++;
    }

    return counter;
}
