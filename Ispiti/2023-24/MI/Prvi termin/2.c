#include <stdio.h>

int main() {
    int n;
    printf("Upisi kapacitet (velicinu) polja > ");
    scanf("%d", &n);
    int a[n];
    printf("Upisi %d brojeva 0-9 > ", n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int min = a[0], max = a[0], imin = 0, imax = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < min) { min = a[i]; imin = i; }
        if (a[i] > max) { max = a[i]; imax = i; }
    }
    if (imin <= imax) {
        for (int i = imin; i <= imax; i++) printf("%d", a[i]);
    } else {
        for (int i = imin; i >= imax; i--) printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
