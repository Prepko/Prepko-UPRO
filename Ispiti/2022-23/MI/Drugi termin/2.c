#include <stdio.h>

int main() {
    int n;
    do {
        printf("Unesite n: ");
        scanf("%d", &n);
    } while (n <= 0);
    int polje[n], neparni[n], parni[n];
    printf("Unesite clanove polja: ");
    for (int i = 0; i < n; i++) scanf("%d", &polje[i]);
    int np = 0, p = 0;
    for (int i = 0; i < n; i++) {
        if (polje[i] % 2 != 0) neparni[np++] = polje[i];
        else parni[p++] = polje[i];
    }
    for (int i = 0; i < np; i++) polje[i] = neparni[i];
    for (int i = 0; i < p; i++) polje[np + i] = parni[i];
    printf("Modificirano polje: ");
    for (int i = 0; i < n; i = i + 1) {
        printf("%d ", polje[i]);
    }
    return 0;
}
