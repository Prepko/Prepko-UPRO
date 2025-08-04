#include <stdio.h>
#include <stdlib.h>

int main() {
    int broj;
    printf("Unesite cetveroznamenkasti broj > ");
    scanf("%d", &broj);

    int t = broj / 1000;
    int s = (broj / 100) % 10;
    int d = (broj / 10) % 10;
    int j = broj % 10;

    if (t + d == s + j)
        printf("Provjera je uspjesna!\n");
    else
        printf("Apsolutna razlika suma je %d\n", abs((t + d) - (s + j)));
    return 0;
}
