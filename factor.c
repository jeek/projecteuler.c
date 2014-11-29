long long * factors(long long number_to_factor) {
    long long *result = malloc(sizeof(long long));
    long long *newresult = malloc(sizeof(long long));
    int i = 2;
    int result_length = 0;
    int j = 0;
    while (number_to_factor > 1) {
        while (number_to_factor % i == 0) {
            number_to_factor /= i;
            result_length++;
            *newresult = malloc(sizeof(long long) * (result_length));
            memcpy(newresult, result, sizeof(long long) * (result_length - 1));
            newresult[result_length - 1] = i;
            *result = malloc(sizeof(long long) * (result_length));
            memcpy(result, newresult, sizeof(long long) * (result_length));
        }
        i++;
    }
    return result;
}