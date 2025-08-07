#include <stdio.h>

int najmanjiElement(int niz[], int n, int *koliko) {
    int min = niz[0];
    *koliko = 1;
    for (int i = 1; i < n; i++) {
        if (niz[i] < min) {
            min = niz[i];
            *koliko = 1;
        } else if (niz[i] == min) {
            (*koliko)++;
        }
    }
    return min;
}

int main() {
    int n;
    printf("Unesi velicinu niza > \n");
    scanf("%d", &n);
    int niz[n];
    printf("Unesi elemente niza > \n");
    for (int i = 0; i < n; i++) scanf("%d", &niz[i]);
    int koliko;
    int min = najmanjiElement(niz, n, &koliko);
    printf("Najmanji element %d s %d ponavljanja.", min, koliko);
    return 0;
}
