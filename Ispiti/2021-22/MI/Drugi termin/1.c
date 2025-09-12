#include <stdio.h>

int main() {
    int a1, a2, maxSuma;
    printf("Upisite tri prirodna broja > ");
    scanf("%d %d %d", &a1, &a2, &maxSuma);
    int suma = 0, i = 1, ai;
    printf("Rezultat:");
    ai = a1;
    if (suma + ai <= maxSuma) {
        printf(" %d", ai);
        suma += ai;
    } else {
        return 0;
    }
    i++;
    ai = a2;
    if (suma + ai <= maxSuma) {
        printf(", %d", ai);
        suma += ai;
    } else {
        return 0;
    }
    int a_im2 = a1, a_im1 = a2;
    for (i = 3; ; i++) {
        if (i % 2 == 1) ai = a_im2 * 3;
        else ai = a_im2 * 2;
        if (suma + ai >= maxSuma) break;
        printf(", %d", ai);
        suma += ai;
        a_im2 = a_im1;
        a_im1 = ai;
    }
    return 0;
}