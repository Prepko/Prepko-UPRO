#include <stdio.h>

int main() {
    int m, n;
    printf("Unesite m > ");
    scanf("%d", &m);
    printf("Unesite n > ");
    scanf("%d", &n);
    int a[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    int d;
    printf("Unesite trazenu udaljenost > ");
    scanf("%d", &d);
    for (int i = 0; i < m; i++) {
        int cnt = 0;
        for (int j = 0; j < n - 1; j++)
            if (a[i][j + 1] - a[i][j] == d) cnt++;
        printf("%d. redak, parova: %d\n", i + 1, cnt);
    }
    return 0;
}
