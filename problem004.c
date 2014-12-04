#include <stdio.h>
#include <math.h>

typedef enum { false, true } boolean;

boolean isapalindrome(NUMTYPE x) {
    if (x == 0) {
        return x == x;
    }
    NUMTYPE y = x;
    NUMTYPE z = 0;
    while (y > 0) {
        z *= 10;
        z += y % 10;
        y /= 10;
    }
    return (x == z);
}

NUMTYPE problem004(int UPPERLIMIT) {
    NUMTYPE i, j; 
    NUMTYPE answer = 0;
    for (i = (NUMTYPE) pow(10,  UPPERLIMIT); i >= (NUMTYPE) pow(10,  UPPERLIMIT - 1) ; i--) {
        for (j = (NUMTYPE) pow(10, UPPERLIMIT) ; j >= i && i * j > answer && j >= (NUMTYPE) pow(10,  UPPERLIMIT - 1) ; j--) {
            if (isapalindrome(i * j)) {
                answer = i * j;
            }
        }
        if (j == (NUMTYPE) pow(10, UPPERLIMIT)) {
            i = 0;
        }
    }
    return answer;
}