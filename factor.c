#include <stdlib.h>

NUMTYPE * factors(NUMTYPE number_to_factor) {
    NUMTYPE *result = malloc(sizeof(NUMTYPE));
    NUMTYPE *newresult = malloc(sizeof(NUMTYPE));
    int i = 2;
    int result_length = 0;
    int j = 0;
    while (number_to_factor > 1) {
        while (number_to_factor % i == 0) {
            number_to_factor /= i;
            result_length++;
            *newresult = malloc(sizeof(NUMTYPE) * (result_length));
            memcpy(newresult, result, sizeof(NUMTYPE) * (result_length - 1));
            newresult[result_length - 1] = i;
            *result = malloc(sizeof(NUMTYPE) * (result_length));
            memcpy(result, newresult, sizeof(NUMTYPE) * (result_length));
        }
        i++;
    }
    return result;
}