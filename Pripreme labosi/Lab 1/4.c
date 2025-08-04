#include <stdio.h>

int main() {
    int dani;
    printf("Unesite broj dana > ");
    scanf("%d", &dani);
    int godine = dani / 365;
    dani %= 365;
    int tjedni = dani / 7;
    dani %= 7;
    printf("Unos odgovara razdoblju od %d godina %d tjedana i %d dana\n", godine, tjedni, dani);
    return 0;
}