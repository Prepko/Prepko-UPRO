#include <stdio.h>

int main() {
    int n, m, idxi, idxj, duljina = 0;
    printf("Upisite brojeve N, M, idxi i idxj > ");
    scanf("%d %d %d %d", &n, &m, &idxi, &idxj);
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            a[i][j] = 0;
    int i_smjer = -1, j_smjer = 1;

    while (1) {
        if (a[idxi][idxj] == 1) break;
        a[idxi][idxj] = 1;
        int novi_i = idxi + i_smjer, novi_j = idxj + j_smjer;
        if (novi_i < 0 || novi_i >= n) i_smjer = -i_smjer;
        if (novi_j < 0 || novi_j >= m) j_smjer = -j_smjer;
        idxi += i_smjer;
        idxj += j_smjer;
        duljina++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("Duljina: %d\n", duljina);
    return 0;
}
