#include <stdio.h>

int main() {
    unsigned short int a, b;
    printf("Unesite dva broja > ");
    scanf("%hu %hu", &a, &b);
    unsigned short int razlika = a ^ b;
    int udaljenost = 0;
    for (int i = 0; i < 16; i++) {
        if ((razlika >> i) & 1) udaljenost++;
    }
    printf("Hammingova udaljenost: %d\n", udaljenost);
    return 0;
}
