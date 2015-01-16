#include "factor.h"

NUMTYPE * factors(NUMTYPE number_to_factor) {
    NUMTYPE *result = malloc(sizeof(NUMTYPE));
    result[0] = 0;
    NUMTYPE i = 2;
    size_t result_length = 0;
    while (number_to_factor > 1) {
        while (number_to_factor % i == 0) {
            number_to_factor /= i;
            result_length++;
            result = realloc(result, sizeof(NUMTYPE) * (result_length));
            result[result_length - 1] = i;
        }
        i++;
    }
    return result;
}