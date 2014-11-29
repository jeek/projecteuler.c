#include "problem001.h"

int problem001(int UPPERLIMIT) {
    int sum = 0, i;
    for (i = 0 ; i < UPPERLIMIT ; i++) {
        if (i % 3 == 0 | i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}