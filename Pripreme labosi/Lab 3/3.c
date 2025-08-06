#include <stdio.h>

int main() {
    int n;
    printf("Unesite n > ");
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Rezultat >");
    for (int j = 0; j < n; j++) {
        int s1 = 0, s2 = 0;
        for (int i = 0; i < n; i++) {
            s1 += a[i][j];
            s2 += a[i][(j + 1) % n];
        }
        printf(" %d", s1 - s2);
    }
    printf("\n");
    return 0;
}
