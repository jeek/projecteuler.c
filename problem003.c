NUMTYPE problem003(NUMTYPE UPPERLIMIT) {
    int i;
    NUMTYPE *result = factors(UPPERLIMIT);
    i = sizeof(*result) / 2;
    return result[i - 1];
}