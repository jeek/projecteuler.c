#include <stdio.h>
#include "gcd.h"

long long problem005(long long UPPERLIMIT) {
    long long answer = 1;
    int i;
    for (i = 1 ; i <= UPPERLIMIT ; i++) {
        answer = lcm(answer, i);
    }
    return answer;
}