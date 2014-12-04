#include <stdio.h>
#include "gcd.h"

NUMTYPE problem005(NUMTYPE UPPERLIMIT) {
    NUMTYPE answer = 1;
    int i;
    for (i = 1 ; i <= UPPERLIMIT ; i++) {
        answer = lcm(answer, i);
    }
    return answer;
}