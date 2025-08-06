#include <stdio.h>

int main() {
    int N;
    printf("Unesite broj clanova polja:\n");
    scanf("%d", &N);

    int polje[N];
    printf("Unesite clanove polja (%d):\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &polje[i]);
    }

    int novi, indeks;
    printf("Unesite vrijednost novog clana te indeks:\n");
    scanf("%d %d", &novi, &indeks);

    printf("Pocetno polje\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", polje[i]);
    }
    printf("\n");

    for (int i = N - 1; i > indeks; i--) {
        polje[i] = polje[i - 1];
    }
    polje[indeks] = novi;

    printf("Novodobiveno polje\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", polje[i]);
    }

    return 0;
}
