#include <stdio.h>

int main() {
    int br;
    printf("Unesite broj rijeci brojalice > ");
    scanf("%d", &br);

    if (br <= 0) {
        printf("KRIVI UNOS\n");
    } else {
        char *rijeci[] = {"eci", "peci", "pec"};
        for (int i = 0; i < br; i++) {
            printf("%s ", rijeci[i % 3]);
        }
        printf("\n");
    }
    return 0;
}
