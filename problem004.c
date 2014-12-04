#include <stdio.h>
#include <math.h>

boolean isapalindrome(long long x) {
    if (x == 0) {
        return x == x;
    }
    long long y = x;
    long long z = 0;
    while (y > 0) {
        z *= 10;
        z += y % 10;
        y /= 10;
    }
    return (x == z);
}

long long problem004(int UPPERLIMIT) {
    long long i, j; 
    long long answer = 0;
    for (i = (long long) pow(10,  UPPERLIMIT); i >= (long long) pow(10,  UPPERLIMIT - 1) ; i--) {
        for (j = (long long) pow(10, UPPERLIMIT) ; j >= i && i * j > answer && j >= (long long) pow(10,  UPPERLIMIT - 1) ; j--) {
            if (isapalindrome(i * j)) {
                answer = i * j;
            }
        }
        if (j == (long long) pow(10, UPPERLIMIT)) {
            i = 0;
        }
    }
    return answer;
}