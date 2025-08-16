#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Unesite broj dana za koji zelite stvoriti popis transakcija: ");
    if (scanf("%d", &n) != 1) return 0;
    float *popis = NULL;
    int ukupno = 0, cap = 0;
    int d, k, i;
    for (d = n; d >= 1; d--) {
        printf("Unesite broj transakcija provedenih prije %d dana: ", d);
        if (scanf("%d", &k) != 1) {
            free(popis);
            return 0;
        }
        for (i = 1; i <= k; i++) {
            float x;
            printf("Transakcija %d: ", i);
            if (scanf("%f", &x) != 1) {
                free(popis);
                return 0;
            }
            if (ukupno == cap) {
                cap = cap ? cap * 2 : 8;
                float *tmp = (float *) realloc(popis, cap * sizeof(float));
                if (!tmp) {
                    free(popis);
                    return 0;
                }
                popis = tmp;
            }
            popis[ukupno++] = x;
        }
    }
    printf("\nPopis transakcija:\n");
    for (i = ukupno - 1; i >= 0; i--) printf("%.2f\n", popis[i]); {
        double sum = 0.0;
        for (i = 0; i < ukupno; i++) sum += popis[i];
        printf("Stanje racuna: %.2f\n", sum);
    }
    free(popis);
    return 0;
}
