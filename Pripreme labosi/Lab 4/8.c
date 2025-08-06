#include <stdio.h>
#include <math.h>

int savrsen_kvadrat(int n) {
    int korijen = sqrt(n);
    return korijen * korijen == n;
}

int factorial(int n) {
    int rezultat = 1;
    for (int i = 2; i <= n; i++) rezultat *= i;
    return rezultat;
}

int zbroj_znamenaka(int n) {
    int suma = 0;
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

int main() {
    int n;
    printf("Upisite prirodni broj > ");
    scanf("%d", &n);
    int f = factorial(n);
    int suma = zbroj_znamenaka(f);
    if (savrsen_kvadrat(suma)) printf("Suma znamenaka od %d! je savrsen kvadrat.", n);
    else printf("Suma znamenaka od %d! nije savrsen kvadrat.", n);
    return 0;
}
