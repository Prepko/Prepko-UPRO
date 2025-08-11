#include <stdio.h>
#include <string.h>

int main() {
    char naziv[31], line[200], ime[31], pred[31];
    int sifS, sifP, count = 0;
    FILE *f = fopen("predmetiPonovos#.txt", "r");
    printf("Upisite naziv predmeta > ");
    scanf(" %[^\n]", naziv);
    int ects;
    while (fgets(line, sizeof(line), f)) {
        sscanf(line, "%d#%30[^#]#%d#%30[^#]#%d", &sifS, ime, &sifP, pred, &ects);
        if (strcmp(naziv, pred) == 0) {
            if (!count) {
                printf("Upisati ponovo:\n-----------------------------------\n");
            }
            printf("%4d %30s\n", sifS, ime);
            count++;
        }
    }
    if (count == 0) printf("Nema studenata za ponovni upis.");
    else printf("-----------------------------------\nUkupno studenata: %17d", count);
    fclose(f);
    return 0;
}
