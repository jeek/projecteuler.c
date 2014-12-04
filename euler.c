#include <stdio.h>
#include "problem001.h"
#include "problem002.h"
#include "problem003.h"
#include "problem004.h"
#include "problem005.h"

int main(int argc, char* argv[]) {
    if (argc == 1 || (argc >= 2 & atoi(argv[1]) == 1)) {
        if (argc == 3) {
            printf("001: %d\n", problem001(atoi(argv[2])));
        } else {
            printf("001: %d\n", problem001(1000));
        }
    }
    if (argc == 1 || (argc >= 2 & atoi(argv[1]) == 2)) {
        printf("002: %d\n", problem002(4000000));
    }
    if (argc == 1 || (argc >= 2 & atoi(argv[1]) == 3)) {
        if (argc == 3) {
            printf("003: ");
            printf(NUMSTR, problem003(NUMCONV(argv[2])));
            printf("\n");
        } else {
            printf("003: ");
            printf(NUMSTR, problem003(600851475143));
            printf("\n");
        }
    }
    if (argc == 1 || (argc >= 2 & atoi(argv[1]) == 4)) {
        if (argc == 3) {
            printf("004: ");
            printf(NUMSTR, problem004(atoi(argv[2])));
            printf("\n");

        } else {
            printf("004: ");
            printf(NUMSTR, problem004(3));
            printf("\n");
        }
    }
    if (argc == 1 || (argc >= 2 & atoi(argv[1]) == 5)) {
        if (argc == 3) {
            printf("005: ");
            printf(NUMSTR, problem005(atoi(argv[2])));
            printf("\n");

        } else {
            printf("005: ");
            printf(NUMSTR, problem005(20));
            printf("\n");
        }
    }
    return 0;
}
