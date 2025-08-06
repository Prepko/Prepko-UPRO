#include <stdio.h>
#include <math.h>

float median(float a, float b, float c) {
    if ((a >= b && a <= c) || (a <= b && a >= c)) return a;
    if ((b >= a && b <= c) || (b <= a && b >= c)) return b;
    return c;
}

int main() {
    float a, b, c;
    printf("Upisite tri realna broja > ");
    scanf("%f %f %f", &a, &b, &c);
    float med = median(a, b, c);
    float srednja = (a + b + c) / 3.0;
    float razlika = fabs(med - srednja);
    printf("Apsolutna vrijednost razlike mediana i srednje vrijednosti je: %.3f", razlika);
    return 0;
}
