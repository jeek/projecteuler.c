#include "problem002.h"

int problem002(UPPERLIMIT) {
    int sum = 0, a = 0, b = 1, c = 1;
    while (c < UPPERLIMIT) {
        if (c % 2 == 0) {
            sum += c;
        }
        a = b;
        b = c;
        c = a + b;
    }
    return sum;
}