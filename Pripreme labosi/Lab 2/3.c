#include <stdio.h>

int main() {
    int m, n;
    printf("Unesi dimenzije: ");
    scanf("%d %d", &m, &n);
    if (m != n) {
        printf("Dimenzije ne odgovaraju kvadratnoj matrici!\n");
        return 0;
    }
    int polje[m][n];

    printf("Unesi clanove polja:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &polje[i][j]);

    printf("Odabrana je matrica:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf(" %d", polje[i][j]);
        printf("\n");
    }

    int glavna = 0, sporedna = 0;
    for (int i = 0; i < n; i++) {
        glavna += polje[i][i] * polje[i][i];
        sporedna += polje[i][n - 1 - i] * polje[i][n - 1 - i];
    }

    printf("Razlika zbrojeva je %d.\n", glavna - sporedna);
    return 0;
}
