#include <stdio.h>
#include <string.h>

int main() {
    char ime[31], line[200], imeF[31], predmet[41];
    int sifS, sifP, ects, sum = 0;
    FILE *f = fopen("predmetiPonovo.txt", "r");
    printf("Upisite ime i prezime studenta > ");
    scanf(" %[^\n]", ime);
    printf("Upisati ponovo:\n-------------------------------------------\n");
    while (fgets(line, sizeof(line), f)) {
        sscanf(line, "%d,%30[^,],%d,%40[^,],%d", &sifS, imeF, &sifP, predmet, &ects);
        if (strcmp(ime, imeF) == 0) {
            printf("%4d %30s %4d\n", sifP, predmet, ects);
            sum += ects;
        }
    }
    printf("-------------------------------------------\nUkupno EUR: %28d", sum * 20);
    fclose(f);
    return 0;
}
