#include <stdio.h>

int main() {
    int n;
    printf("Unesite n > ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Neispravan n\n");
        return 0;
    }
    double s = 0.0;
    for (int i = 1; i <= n; i++) {
        int Ti = i * (i + 1) / 2;
        s += 1.0 / Ti;
    }
    printf("%.9f\n", s);
    return 0;
}
