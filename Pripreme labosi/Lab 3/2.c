#include <stdio.h>

int main() {
    int n;
    printf("Upisite broj redaka/stupaca matrice > ");
    scanf("%d", &n);
    int a[n][n];

    printf("Upisite %dx%d clanova > \n", n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    int red, stupac, suma = 0;
    printf("Upisite redni broj retka > ");
    scanf("%d", &red);
    printf("Upisite redni broj stupca > ");
    scanf("%d", &stupac);

    for (int j = 0; j < n; j++) suma += a[red][j];
    for (int i = 0; i < n; i++) if (i != red) suma += a[i][stupac];
    printf("Suma brojeva koji se nalaze u retku %d i stupcu %d je %d.", red, stupac, suma);
    return 0;
}
