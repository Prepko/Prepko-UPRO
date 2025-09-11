#include <stdio.h>
#include <string.h>

int main() {
    char ulaz[31], izlaz[31];
    printf("Upisite ulazni niz > ");
    fgets(ulaz, 31, stdin);
    int n = strlen(ulaz);
    if (n > 0 && ulaz[n - 1] == '\n') ulaz[n - 1] = '\0';
    int pos = 0;
    for (int i = 0; ulaz[i] != '\0'; i++) {
        if (ulaz[i] >= 'a' && ulaz[i] <= 'z') {
            int postoji = 0;
            for (int j = 0; j < pos; j++)
                if (izlaz[j] == ulaz[i]) { postoji = 1; break; }
            if (!postoji) izlaz[pos++] = ulaz[i];
        }
    }
    izlaz[pos] = '\0';
    printf("Izlaz: %s\n", izlaz);
    printf(" Ulaz: %s", ulaz);
    return 0;
}
