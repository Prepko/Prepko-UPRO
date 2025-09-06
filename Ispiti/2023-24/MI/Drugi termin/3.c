#include <stdio.h>

int main() {
    int n;
    do {
        printf("Ucitajte red matrice> ");
        scanf("%d", &n);
    } while (n < 2 || n > 10);
    int a[10][10];
    printf("Ucitajte %d elemenata cjelobrojne matrice> \n", n*n);
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    printf("Ucitana matrica:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("%4d", a[i][j]);
        printf("\n");
    }
    int tmp = a[0][0];
    for (int j = 0; j < n-1; j++) a[0][j] = a[0][j+1];
    for (int i = 0; i < n-1; i++) a[i][n-1] = a[i+1][n-1];
    for (int j = n-1; j > 0; j--) a[n-1][j] = a[n-1][j-1];
    for (int i = n-1; i > 0; i--) a[i][0] = a[i-1][0];
    a[1][0] = tmp;
    printf("\nPosmaknuta matrica:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) printf("%4d", a[i][j]);
        printf("\n");
    }
    return 0;
}
