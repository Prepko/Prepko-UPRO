#include <stdio.h>

int djelitelj(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void reduciraj(int br, int naz) {
    int d = djelitelj(br, naz);
    br /= d;
    naz /= d;
    if (naz == 1) printf("Reduciran: %d", br);
    else printf("Reduciran: %d/%d", br, naz);
}

int main() {
    int br, naz;
    printf("Upisite brojnik i nazivnik: ");
    scanf("%d %d", &br, &naz);
    printf("Razlomak: %d/%d\n", br, naz);
    reduciraj(br, naz);
    return 0;
}
