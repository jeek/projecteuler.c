NUMTYPE gcd(NUMTYPE a, NUMTYPE b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

NUMTYPE lcm(NUMTYPE a, NUMTYPE b) {
    return a * b / gcd(a, b);
}