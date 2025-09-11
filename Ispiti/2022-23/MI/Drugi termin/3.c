#include <stdio.h>

int main() {
    int m;
    printf("Unesite m > ");
    scanf("%d", &m);
    int a[m][m];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < m - 1; i++)
        for (int j = i + 1; j < m; j++)
            if (a[i][i] > a[j][j]) {
                int t = a[i][i];
                a[i][i] = a[j][j];
                a[j][j] = t;
            }
    printf("Ispis:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    return 0;
}
