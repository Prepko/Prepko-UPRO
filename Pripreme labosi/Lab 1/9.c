#include <stdio.h>

int main() {
    int a, b;
    printf("Upisite dva prirodna broja iz intervala [1, 1000] > ");
    scanf("%d %d", &a, &b);

    if (a < 1 || a > 1000 || b < 1 || b > 1000) {
        printf("Brojevi moraju biti u intervalu [1, 1000].");
    } else if (a >= b) {
        printf("Prvi broj mora biti manji od drugog broja.");
    } else {
        int suma = 0;
        for (int i = a + 2; i <= b; i += 3) {
            suma += i;
        }
        printf("Zbroj svakog treceg broja iznosi: %d", suma);
    }
    return 0;
}
