#include <stdio.h>

int main() {
    int a;
    printf("Unesite prirodni broj > ");
    scanf("%d", &a);
    int count1 = 0;
    printf("Rezultat: %d", a);
    if (a == 1) count1++;
    while (count1 < 3) {
        if (a % 2 == 0) a = a / 2;
        else a = 3 * a + 1;
        printf(", %d", a);
        if (a == 1) count1++;
    }
    printf("\n");
    return 0;
}
