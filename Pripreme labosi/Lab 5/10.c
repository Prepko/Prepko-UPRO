#include <math.h>
#include <stdio.h>

_Bool Ekstrem(float *x, float *y) {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    *x = -b / (2 * a);
    *y = a * (*x) * (*x) + b * (*x) + c;
    return a > 0;
}

int main() {
    float x, y;
    printf("Upisite koeficijente kvadratne funkcije > \n");
    if (Ekstrem(&x, &y)) printf("Funkcija ima minimum u (%.2f, %.2f)", x, y);
    else printf("Funkcija ima maksimum u (%.2f, %.2f)", x, y);
    return 0;
}
