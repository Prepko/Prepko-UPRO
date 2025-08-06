#include <stdio.h>

int main() {
    int n;
    printf("Unesite dimenzije polja: ");
    scanf("%d", &n);
    int a[n][n], b[n][n];

    printf("Unesite elemente polja:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            b[j][n - 1 - i] = a[i][j];

    printf("Izracunato polje:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
    return 0;
}
