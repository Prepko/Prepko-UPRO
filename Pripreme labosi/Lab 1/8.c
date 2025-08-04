#include <stdio.h>

int main() {
    int dijamant;
    printf("Unesite broj > ");
    scanf("%d", &dijamant);

    if (dijamant % 2 == 0) {
        printf("Neispravan unos!");
    } else {
        int i, j;
        for (i = 1; i <= dijamant; i += 2) {
            for (j = 0; j < (dijamant - i) / 2; j++) {
                printf(" ");
            }
            for (j = 0; j < i; j++) {
                printf("*");
            }
            printf("\n");
        }
        for (i = dijamant - 2; i >= 1; i -= 2) {
            for (j = 0; j < (dijamant - i) / 2; j++) {
                printf(" ");
            }
            for (j = 0; j < i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
