#include "problem003.h"
#include <stddef.h>
#include "factor.h"

NUMTYPE problem003(NUMTYPE UPPERLIMIT) {
    size_t i;
    static NUMTYPE *result;
    result = factors(UPPERLIMIT);
    i = 0;
    while (result[i] != -1) {
        i++;
    }
    return result[i - 1];
}