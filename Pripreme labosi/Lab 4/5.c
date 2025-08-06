#include <stdio.h>
#include <math.h>

double e_approx(int n) {
    double suma = 1.0, faktorijela = 1.0;
    for (int i = 1; i <= n; i++) {
        faktorijela *= i;
        suma += 1.0 / faktorijela;
    }
    return suma;
}

int main() {
    int n;
    printf("Upisite broj n: ");
    scanf("%d", &n);
    double aprox = e_approx(n);
    double e = exp(1);
    printf("Aproksimacija e: %.12f\n", aprox);
    printf("Razlika: %.12f", aprox - e);
    return 0;
}
