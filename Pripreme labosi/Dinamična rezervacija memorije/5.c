#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct zapis_s {
    char ime[21];
    char prezime[21];
    char sifra[11];
};

void genSifra(struct zapis_s *pointer, int n) {
    for (int i = 0; i < 10; i++) {
        int r = rand();
        if (r % 2) pointer->sifra[i] = 'a' + (r % 26);
        else pointer->sifra[i] = '0' + (r % 10);
    }
    pointer->sifra[10] = '\0';
}

int main() {
    srand(5000);
    struct zapis_s *polje = NULL;
    int br = 0, cap = 0;
    printf("(1) Dodaj novi element polja\n(2) Ispisi sve elemente polja\n(3) Kraj/zavrsni ispis");
    while (1) {
        int odabir;
        printf("\n----------\n==> Unesi odabir: ");
        if (scanf("%d", &odabir) != 1) return 0;
        if (odabir == 1) {
            struct zapis_s z;
            printf("\nUpisi ime i prezime > ");
            scanf("%20s %20s", z.ime, z.prezime);
            genSifra(&z, br + 1);
            if (br == cap) {
                cap = cap ? cap * 2 : 8;
                struct zapis_s *tmp = (struct zapis_s *) realloc(polje, cap * sizeof(struct zapis_s));
                if (!tmp) {
                    free(polje);
                    return 0;
                }
                polje = tmp;
            }
            polje[br++] = z;
            printf("\n\nGenerirana Sifra: %s", z.sifra);
        } else if (odabir == 2) {
            printf("\nElementi polja:");
            for (int i = 0; i < br; i++)
                printf("\n[Ime: %s] [Prezime: %s] [Sifra: %s]", polje[i].ime, polje[i].prezime,
                       polje[i].sifra);
        } else if (odabir == 3) {
            free(polje);
            return 0;
        } else {
            printf("\nKrivi odabir, probaj ponovo...");
        }
    }
}
