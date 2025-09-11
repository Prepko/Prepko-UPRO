#include <stdio.h>

int main() {
    int n;
    do {
        printf("Unesite n > ");
        scanf("%d", &n);
    } while (n <= 0);
    int a[n], i;
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i + 1 < n; i += 2) {
        int t = a[i];
        a[i] = a[i + 1];
        a[i + 1] = t;
    }
    for (i = 0; i < n; i = i + 1) {
        printf("%d ", a[i]);
    }
    return 0;
}
