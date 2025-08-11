#include <stdio.h>

int main() {
    int broj3;
    printf("Upisite troznamenkasti prirodni broj > ");
    scanf("%d", &broj3);

    int cifra1 = broj3 / 100;
    int cifra2 = (broj3 / 10) % 10;
    int cifra3 = broj3 % 10;
    int parna = 0, neparna = 0;

    if (cifra1 % 2 == 0) parna += cifra1;
    else neparna += cifra1;
    if (cifra2 % 2 == 0) parna += cifra2;
    else neparna += cifra2;
    if (cifra3 % 2 == 0) parna += cifra3;
    else neparna += cifra3;

    printf("Rezultat: %d\n", parna - neparna);
    return 0;
}
