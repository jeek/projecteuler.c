#include "problem003.h"
#include "factor.h"
#include "stdio.h"

long long problem003(long long UPPERLIMIT) {
    int i;
    long long *result = factors(UPPERLIMIT);
    i = sizeof *result;
    return result[i-1];
}