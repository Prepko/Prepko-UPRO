#include <stdio.h>

int main() {
    unsigned short int broj;
    printf("Unesite broj > ");
    scanf("%hu", &broj);

    printf("Binarni zapis ucitanog broja: ");
    for (int i = 15; i >= 0; i--) {
        printf("%d", (broj >> i) & 1);
    }
    printf("\n");

    int nasao = 0;
    for (int i = 0; i <= 15; i++) {
        if (!((broj >> i) & 1)) {
            printf("Indeks najmanje znacajnog bita s vrijednosti 0: %d\n", i);
            nasao = 1;
            break;
        }
    }
    if (!nasao) printf("Nema bita s vrijednosti 0.\n");
    return 0;
}
