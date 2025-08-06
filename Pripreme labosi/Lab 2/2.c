#include <stdio.h>

int main() {
    int n;
    printf("Unesite duljinu polja: ");
    scanf("%d", &n);
    int polje[n];

    printf("Unesite elemente polja:\n");
    for (int i = 0; i < n; i++) scanf("%d", &polje[i]);

    for (int i = 0; i < n; i++) {
        int zbroj = 0;
        for (int j = i; j < n; j++) zbroj += polje[j];
        polje[i] = zbroj;
    }

    printf("Izracunato polje: ");
    for (int i = 0; i < n; i++) printf("%d ", polje[i]);
    return 0;
}
