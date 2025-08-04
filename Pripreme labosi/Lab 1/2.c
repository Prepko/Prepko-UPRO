#include <stdio.h>

int main() {
    int iznos, pet, dva, jedan;
    printf("Upisite iznos u kn > ");
    scanf("%d", &iznos);

    pet = iznos / 5;
    dva = iznos % 5 / 2;
    jedan = iznos % 5 % 2;

    printf("Kovanice:\n");
    if (pet) {
        printf("%d x 5 kn\n", pet);
    }
    if (dva) {
        printf("%d x 2 kn\n", dva);
    }
    if (jedan) {
        printf("%d x 1 kn\n", jedan);
    }
    return 0;
}
