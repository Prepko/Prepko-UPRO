#include <stdio.h>

int main() {
    int n;
    do {
        printf("Unesite duljinu polja > ");
        scanf("%d", &n);
    } while (n < 5 || n > 10);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int min_i = 0, max_i = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[min_i]) min_i = i;
        if (a[i] > a[max_i]) max_i = i;
    }
    int tmp = a[min_i];
    a[min_i] = a[max_i];
    a[max_i] = tmp;
    printf("Rezultat: %d", a[0]);
    for (int i = 1; i < n; i++) printf(", %d", a[i]);
    printf("\n");
    return 0;
}
