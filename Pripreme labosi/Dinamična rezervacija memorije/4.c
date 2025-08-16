#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char simbol[11];
    int kolicina;
    float cijena;
} Dionica;

int main() {
    Dionica *portfelj = NULL;
    int br = 0, cap = 0;
    while (1) {
        int opcija;
        printf("Opcije:\n1. Dodaj novu dionicu\n2. Ispis portfelja\n3. Izlaz\nOdaberite opciju: ");
        if (scanf("%d", &opcija) != 1) return 0;
        if (opcija == 1) {
            Dionica d;
            printf("Unesite simbol dionice: ");
            scanf("%10s", d.simbol);
            printf("Unesite kolicinu dionica koje posjedujete: ");
            scanf("%d", &d.kolicina);
            printf("Unesite trenutacnu cijenu dionice: ");
            scanf("%f", &d.cijena);
            if (br == cap) {
                cap = cap ? cap * 2 : 8;
                Dionica *tmp = (Dionica *) realloc(portfelj, cap * sizeof(Dionica));
                if (!tmp) {
                    free(portfelj);
                    return 0;
                }
                portfelj = tmp;
            }
            portfelj[br++] = d;
        } else if (opcija == 2) {
            printf("Portfelj:\n");
            for (int i = 0; i < br; i++)
                printf("Simbol: %s | Broj dionica: %d | Cijena: %.2f\n", portfelj[i].simbol,
                       portfelj[i].kolicina, portfelj[i].cijena);
        } else if (opcija == 3) {
            double ukupno = 0.0;
            for (int i = 0; i < br; i++) ukupno += portfelj[i].kolicina * portfelj[i].cijena;
            printf("Ukupna vrijednost portfelja iznosi: %.2f", ukupno);
            free(portfelj);
            return 0;
        } else {
            printf("Nepoznata opcija. Molimo odaberite ponovno.\n");
        }
    }
}
