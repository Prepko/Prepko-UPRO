#include <stdio.h>

int main() {
    int n;
    do {
        printf("Upisite n > ");
        scanf("%d", &n);
    } while (n <= 0);
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++) {
        int j = n - 1 - i;
        if (i % 2 == 0) a[i][j] = 0;
        else a[i][j] = 1;
    }
    printf("Rezultat:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
