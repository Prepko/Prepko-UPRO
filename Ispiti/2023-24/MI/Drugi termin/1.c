#include <stdio.h>

int main() {
    int n;
    do {
        printf("Unesite n > ");
        scanf("%d", &n);
    } while (n <= 2);
    int a[n];
    printf("Unesite clanove niza > ");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int d = a[1] - a[0], arit = 1;
    for (int i = 2; i < n; i++) if (a[i] - a[i-1] != d) { arit = 0; break; }
    if (arit) printf("A > %d\n", d); else printf("NIJE");
    return 0;
}
