#include <stdio.h>

int main() {
    unsigned short int broj;
    printf("Unesite broj > ");
    scanf("%hu", &broj);

    printf("Binarni zapis broja: ");
    for (int i = 15; i >= 0; i--) {
        printf("%d", (broj >> i) & 1);
    }
    printf("\n");

    int indeks, vrijednost;
    while (1) {
        printf("Unesite indeks i vrijednost bita > ");
        scanf("%d %d", &indeks, &vrijednost);
        if (indeks < 0 || indeks > 15 || (vrijednost != 0 && vrijednost != 1)) break;
        if (vrijednost == 1) broj |= (1 << indeks);
        else broj &= ~(1 << indeks);
    }

    printf("\nDekadski i binarni zapis izmijenjenog broja: %hu ", broj);
    for (int i = 15; i >= 0; i--) {
        printf("%d", (broj >> i) & 1);
    }
    return 0;
}
