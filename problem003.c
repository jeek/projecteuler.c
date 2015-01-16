#include "problem003.h"
#include <stddef.h>
#include "factor.h"

NUMTYPE problem003(NUMTYPE UPPERLIMIT) {
    size_t i;
    static NUMTYPE *result;
    result = factors(UPPERLIMIT);
    i = sizeof(result) / 2;
    return result[i - 1];
}