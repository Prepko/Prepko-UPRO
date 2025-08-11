#include <stdio.h>

int main() {
    int ph;
    printf("Unesite pH vrijednost otopine > ");
    scanf("%d", &ph);

    if (ph < 0 || ph > 14)
        printf("KRIVI UNOS\n");
    else if (ph < 7)
        printf("Otopina je kisela.\n");
    else if (ph == 7)
        printf("Otopina je neutralna.\n");
    else
        printf("Otopina je luznata.\n");
    return 0;
}
