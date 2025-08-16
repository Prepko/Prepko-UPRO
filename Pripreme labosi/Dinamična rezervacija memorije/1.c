#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, i;
    if (printf("Unesite inicijalnu velicinu polja: "), scanf("%d", &size) != 1) return 0;
    int *a = (int *) malloc(size * sizeof(int));
    if (!a) return 0;
    printf("Unesite %d elemenata:\n", size);
    for (i = 0; i < size; i++) scanf("%d", &a[i]);
    printf("\n");
    int k, pos;
    printf("Unesite broj elemenata koje zelite umetnuti: ");
    if (scanf("%d", &k) != 1) {
        free(a);
        return 0;
    }
    printf("Unesite poziciju od koje zelite umetnuti elemente (0 do %d): ", size);
    if (scanf("%d", &pos) != 1) {
        free(a);
        return 0;
    }
    if (pos < 0 || pos > size) {
        printf("Neispravna pozicija!\n");
        printf("Polje nakon umetanja: ");
        for (i = 0; i < size; i++) printf("%d%s", a[i], i == size - 1 ? "\n" : " ");
        free(a);
        return 0;
    }
    int *ins = (int *) malloc(k * sizeof(int));
    if (!ins) {
        free(a);
        return 0;
    }
    printf("Unesite %d elementa koja zelite umetnuti:\n", k);
    for (i = 0; i < k; i++) scanf("%d", &ins[i]);
    int newSize = size + k;
    int *b = (int *) malloc(newSize * sizeof(int));
    if (!b) {
        free(a);
        free(ins);
        return 0;
    }
    for (i = 0; i < pos; i++) b[i] = a[i];
    for (i = 0; i < k; i++) b[pos + i] = ins[i];
    for (i = pos; i < size; i++) b[k + i] = a[i];
    free(a);
    free(ins);
    a = b;
    size = newSize;
    printf("Elementi su uspjesno umetnuti.\n");
    printf("Polje nakon umetanja: ");
    for (i = 0; i < size; i++) printf("%d%s", a[i], i == size - 1 ? "\n" : " ");
    free(a);
    return 0;
}
