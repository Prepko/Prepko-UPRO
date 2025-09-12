#include <stdio.h>

int main() {
    int a[10], n = 0, x;
    while (n < 10) {
        scanf("%d", &x);
        if (x == 0) break;
        a[n++] = x;
    }
    if (n == 0) {
        printf("0.00, 0.00\n");
        return 0;
    }
    double suma = 0;
    for (int i = 0; i < n; i++) suma += a[i];
    double mean = suma / n;
    double var = 0;
    for (int i = 0; i < n; i++) {
        double diff = a[i] - mean;
        var += diff * diff;
    }
    var /= n;
    printf("%.2f, %.2f\n", mean, var);
    return 0;
}
