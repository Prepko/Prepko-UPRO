#include <stdio.h>

void fibNextN(int n) {
    static unsigned long long f1 = 0, f2 = 1;
    for (int i = 0; i < n; i++) {
        printf("%u ", (unsigned int)f1);
        unsigned long long next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}
