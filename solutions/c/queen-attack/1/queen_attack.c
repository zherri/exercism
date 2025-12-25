#include "queen_attack.h"

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
    quadrant_t quadrant;
    
    if (queen_1.column > 7 || queen_2.column > 7)
        return INVALID_POSITION;
    if (queen_1.row > 7 || queen_2.row > 7)
        return INVALID_POSITION;
    if (queen_1.column == queen_2.column && queen_1.row == queen_2.row)
        return INVALID_POSITION;

    if (queen_1.column == queen_2.column || queen_1.row == queen_2.row) {
        return CAN_ATTACK;
    }

    if (queen_2.column > queen_1.column) {
        if (queen_2.row > queen_1.row) {
            quadrant = IV;
        } else {
            quadrant = I;
        }
    } else {
        if (queen_2.row > queen_1.row) {
            quadrant = III;
        } else {
            quadrant = II;
        }
    }

    int i = queen_1.column;
    int j = queen_1.row;

    switch (quadrant) {
        case I:
            do {
                i++;
                j--;

                if (queen_2.column == i && queen_2.row == j)
                    return CAN_ATTACK;
            } while (i <= 7 && j >= 0);
            break;
        case II:
            do {
                i--;
                j--;

                if (queen_2.column == i && queen_2.row == j)
                    return CAN_ATTACK;
            } while (i >= 0 && j >= 0);
            break;
        case III:
            do {
                i--;
                j++;

                if (queen_2.column == i && queen_2.row == j)
                    return CAN_ATTACK;
            } while (i >= 0 && j <= 7);
            break;
        case IV:
            do {
                i++;
                j++;

                if (queen_2.column == i && queen_2.row == j)
                    return CAN_ATTACK;
            } while (i <= 7 && j <= 7);
            break;
    }

    return CAN_NOT_ATTACK;
}
