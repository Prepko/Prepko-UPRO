void PomicniProsjek(double *ulaz, double *izlaz, int *n, int *prozor) {
    for (int i = 0; i < *n; i++) {
        double suma = 0.0;
        int k = (i + 1 < *prozor) ? i + 1 : *prozor;
        for (int j = i - k + 1; j <= i; j++) {
            suma += ulaz[j];
        }
        izlaz[i] = suma / k;
    }
}

#include <stdio.h>

int main() {
    int n, prozor;
    printf("Unesite broj elemenata ulaznog niza: \n");
    scanf("%d", &n);
    double ulaz[n], izlaz[n];
    printf("Unesite elemente ulaznog niza:\n");
    for (int i = 0; i < n; i++) scanf("%lf", &ulaz[i]);
    printf("Unesite velicinu prozora: \n");
    scanf("%d", &prozor);
    PomicniProsjek(ulaz, izlaz, &n, &prozor);
    printf("Ulazni niz:");
    for (int i = 0; i < n; i++) printf(" %.2f", ulaz[i]);
    printf("\nFiltrirani niz:");
    for (int i = 0; i < n; i++) printf(" %.2f", izlaz[i]);
    printf("\n");
    return 0;
}
