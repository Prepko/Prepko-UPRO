#include <stdio.h>

int prim(int x) {
    if (x < 2) return 0;
    for (int i = 2; i * i <= x; i++) if (x % i == 0) return 0;
    return 1;
}

int sadrzi(int x, int z) {
    if (x == 0 && z == 0) return 1;
    while (x > 0) {
        if (x % 10 == z) return 1;
        x /= 10;
    }
    return 0;
}

int main() {
    int z;
    printf("Upisite znamenku > ");
    scanf("%d", &z);
    int suma = 0;
    for (int i = 997; i >= 100; i--) {
        if (prim(i) && sadrzi(i, z)) {
            printf("%d ", i);
            suma += i;
        }
    }
    printf("\nZbroj: %d\n", suma);
    return 0;
}
