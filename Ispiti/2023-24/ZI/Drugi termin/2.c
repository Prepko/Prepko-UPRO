#include <stdio.h>
#include <stdlib.h>

int* slucajniClan(int m, int n, int polje[m][n]) {
    int i = rand() % m;
    int j = rand() % n;
    return &polje[i][j];
}

int main(void) {
    int m, n;
    printf("Upisite broj redaka i stupaca > ");
    scanf("%d %d", &m, &n);
    int polje[m][n];
    printf("Upisite clanove polja > ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &polje[i][j]);
    unsigned int sjeme;
    printf("Upisite sjeme > ");
    scanf("%u", &sjeme);
    srand(sjeme);
    int *p = slucajniClan(m, n, polje);
    int sumaRed = 0, sumaStup = 0;
    int ri = -1, cj = -1;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (&polje[i][j] == p) { ri = i; cj = j; }
    for (int j = 0; j < n; j++) sumaRed += polje[ri][j];
    for (int i = 0; i < m; i++) sumaStup += polje[i][cj];
    printf("suma retka = %d\n", sumaRed);
    printf("suma stupca = %d\n", sumaStup);
    return 0;
}
