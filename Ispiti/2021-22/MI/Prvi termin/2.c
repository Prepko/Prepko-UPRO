#include <stdio.h>

int main() {
    int m, n;
    do {
        printf("Unesite m > ");
        scanf("%d", &m);
    } while (m <= 0);
    do {
        printf("Unesite n > ");
        scanf("%d", &n);
    } while (n <= 0);
    int a[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] >= 0) {
                if (i % 2 == 0) a[i][j] = 0;
                else a[i][j] = 1;
            }
        }
    }
    printf("Rezultat:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) printf("%3d", a[i][j]);
        printf("\n");
    }
    return 0;
}
