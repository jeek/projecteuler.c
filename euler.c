#include <stdio.h>
#include "problem001.h"
#include "problem002.h"

#define SOLVED [1, 2];

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
}