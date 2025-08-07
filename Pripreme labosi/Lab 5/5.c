#include <stdio.h>

int ProvjeriPravokutnik(int x1, int y1, int x2, int y2) {
    return (x1 != x2 && y1 != y2);
}

int IzracunajDuljinuStranice(int t1, int t2) {
    int d = t1 - t2;
    return d < 0 ? -d : d;
}

int IzracunajOpseg(int a, int b) {
    return 2 * (a + b);
}

int IzracunajPovrsinu(int a, int b) {
    return a * b;
}

void IzracunajOpsegPovrsinu(int *opseg, int *povrsina) {
    int x1, y1, x2, y2;
    printf("Unesite koordinate za tocku 1 > ");
    scanf("%d %d", &x1, &y1);
    printf("Unesite koordinate za tocku 2 > ");
    scanf("%d %d", &x2, &y2);
    if (!ProvjeriPravokutnik(x1, y1, x2, y2)) {
        *opseg = -1;
        *povrsina = -1;
        return;
    }
    int a = IzracunajDuljinuStranice(x1, x2);
    int b = IzracunajDuljinuStranice(y1, y2);
    *opseg = IzracunajOpseg(a, b);
    *povrsina = IzracunajPovrsinu(a, b);
}
