#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool podaciZaKatProizv(char *imeDat, char *nazKat, int *brojProizv, float *najNizaC, float *najVisaC) {
    FILE *f = fopen(imeDat, "r");
    if (!f) return false;

    *brojProizv = 0;
    *najNizaC = 0;
    *najVisaC = 0;

    char line[256];
    while (fgets(line, sizeof(line), f)) {
        char *tok = strtok(line, "#");
        if (!tok) continue;
        tok = strtok(NULL, "#");
        if (!tok) continue;
        char kat[21];
        strcpy(kat, tok);
        tok = strtok(NULL, "#");
        if (!tok) continue;
        tok = strtok(NULL, "#\n");
        if (!tok) continue;
        float cijena = atof(tok);

        if (strcmp(kat, nazKat) == 0) {
            if (*brojProizv == 0) {
                *najNizaC = cijena;
                *najVisaC = cijena;
            } else {
                if (cijena < *najNizaC) *najNizaC = cijena;
                if (cijena > *najVisaC) *najVisaC = cijena;
            }
            (*brojProizv)++;
        }
    }

    fclose(f);
    return true;
}

int main(void){
    char imeDat[128+1];
    char nazKat[20+1];
    printf("Naziv datoteke: ");
    scanf("%s%*c", imeDat);
    printf("Kategorija proizvoda: ");
    scanf("%[^\n]", nazKat);

    int brojProizv;
    float najNizaC, najVisaC;
    bool ok = podaciZaKatProizv(imeDat, nazKat, &brojProizv, &najNizaC, &najVisaC);

    if (!ok) {
        printf("Ne postoji datoteka.");
    } else if (brojProizv == 0) {
        printf("Nema proizvoda u navedenoj kategoriji.");
    } else {
        printf("Broj proizvoda, najniza i najvisa cijena: %d %.2f %.2f", brojProizv, najNizaC, najVisaC);
    }

    return 0;
}
