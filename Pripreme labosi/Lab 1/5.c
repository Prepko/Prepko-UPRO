#include <stdio.h>

int main() {
    int n;
    printf("Unesite broj > \n");
    scanf("%d", &n);

    if (n <= 0)
        printf("Unesen je pogresan broj!\n");
    else {
        int djeljiv = 0;
        if (n % 2 == 0) {
            printf("Broj je djeljiv s brojem 2.\n");
            djeljiv = 1;
        }
        if (n % 3 == 0) {
            printf("Broj je djeljiv s brojem 3.\n");
            djeljiv = 1;
        }
        if (n % 5 == 0) {
            printf("Broj je djeljiv s brojem 5.\n");
            djeljiv = 1;
        }
        if (n % 7 == 0) {
            printf("Broj je djeljiv s brojem 7.\n");
            djeljiv = 1;
        }
        if (!djeljiv) {
            printf("Broj nije djeljiv s brojevima 2, 3, 5, 7.\n");
        }
    }
    return 0;
}
