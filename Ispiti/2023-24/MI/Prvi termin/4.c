#include <stdio.h>

int main() {
    int n;
    do {
        printf("Ucitajte red matrice> ");
        scanf("%d", &n);
    } while (n < 1 || n > 10);
    int a[10][10];
    printf("Ucitajte %d elemenata cjelobrojne matrice> \n", n*n);
    int pozitivni = 0, negativni = 0;
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) {
        scanf("%d", &a[i][j]);
        if (a[i][j] > 0) pozitivni++;
        else if (a[i][j] < 0) negativni++;
    }
    printf("Ucitana matrica:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("%4d", a[i][j]);
        printf("\n");
    }
    printf("Matrica rotirana ulijevo:\n");
    for (int j = n-1; j >= 0; j--) {
        for (int i = 0; i < n; i++) printf("%4d", a[i][j]);
        printf("\n");
    }
    printf("Pozitivnih: %d\n", pozitivni);
    printf("Negativnih: %d\n", negativni);
    return 0;
}
