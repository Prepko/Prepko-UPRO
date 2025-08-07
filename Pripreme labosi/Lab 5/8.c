#include <math.h>
#include <stdio.h>

#define M_PI 3.14159

void IzracunajRezultantu(float *sila1, float *sila2, float *kut, float *rezultanta) {
    float rad = (*kut) * M_PI / 180.0;
    *rezultanta = sqrt((*sila1) * (*sila1) + (*sila2) * (*sila2) + 2 * (*sila1) * (*sila2) * cos(rad));
}

int main() {
    float s1, s2, kut, rezultanta;
    printf("Unesite prvu silu (u Newtonima): \n");
    scanf("%f", &s1);
    printf("Unesite drugu silu (u Newtonima): \n");
    scanf("%f", &s2);
    printf("Unesite kut između sila (u stupnjevima): \n");
    scanf("%f", &kut);
    IzracunajRezultantu(&s1, &s2, &kut, &rezultanta);
    printf("Rezultanta sila iznosi: %.2f N", rezultanta);
    return 0;
}
