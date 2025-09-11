#include <stdio.h>
#include <math.h>

int prost(int x) {
    if (x < 2) return 0;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return 0;
    return 1;
}

int djeljiv3(int x) {
    int dolje = x - (x % 3);
    int gore = dolje + 3;
    if (x - dolje <= gore - x) return dolje;
    else return gore;
}

int main() {
    int N;
    do {
        printf("Upisite N > ");
        scanf("%d", &N);
    } while (N <= 0 || N > 50);
    int br = 0, p = 2;
    while (br < N) {
        if (prost(p)) {
            printf("%d ", djeljiv3(p));
            br++;
        }
        p++;
    }
    return 0;
}
