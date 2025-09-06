#include <stdio.h>

int main() {
    unsigned int broj, obrazac;
    int k;
    scanf("%u %u %d", &broj, &obrazac, &k);
    int br = 0, mask = (1u << k) - 1;
    for (int i = 0; i <= 32-k; i++) {
        if (((broj >> i) & mask) == obrazac) br++;
    }
    printf("Obrazac se pojavljuje %d puta.\n", br);
    return 0;
}
