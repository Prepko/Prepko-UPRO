#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char ime[50];
    char prezime[50];
    char brojTelefona[15];
} kontakt_s;

static void trimnl(char *s) {
    size_t n = strlen(s);
    if (n && s[n - 1] == '\n') s[n - 1] = '\0';
}

kontakt_s *stvoriKontakt(char *ime, char *prezime, char *brojTelefona) {
    kontakt_s *k = (kontakt_s *) malloc(sizeof(kontakt_s));
    if (!k) return NULL;
    strncpy(k->ime, ime, sizeof(k->ime) - 1);
    k->ime[sizeof(k->ime) - 1] = '\0';
    strncpy(k->prezime, prezime, sizeof(k->prezime) - 1);
    k->prezime[sizeof(k->prezime) - 1] = '\0';
    strncpy(k->brojTelefona, brojTelefona, sizeof(k->brojTelefona) - 1);
    k->brojTelefona[sizeof(k->brojTelefona) - 1] = '\0';
    return k;
}

int main() {
    int n;
    printf("Unesite broj novih kontakta > ");
    if (scanf("%d", &n) != 1) return 0;
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    kontakt_s **imenik = (kontakt_s **) malloc(n * sizeof(kontakt_s *));
    if (!imenik) return 0;
    char bufIme[256], bufPrez[256], bufBr[256];
    for (int i = 0; i < n; i++) {
        printf("Unesite ime kontakta %d > ", i + 1);
        if (!fgets(bufIme, sizeof(bufIme),stdin)) {
            n = i;
            break;
        }
        trimnl(bufIme);
        printf("Unesite prezime kontakta %d > ", i + 1);
        if (!fgets(bufPrez, sizeof(bufPrez),stdin)) {
            n = i;
            break;
        }
        trimnl(bufPrez);
        printf("Unesite broj telefona kontakta %d > ", i + 1);
        if (!fgets(bufBr, sizeof(bufBr),stdin)) {
            n = i;
            break;
        }
        trimnl(bufBr);
        imenik[i] = stvoriKontakt(bufIme, bufPrez, bufBr);
        if (!imenik[i]) {
            n = i;
            break;
        }
    }
    printf("\n\nIspis imenika:\n");
    for (int i = 0; i < n; i++) {
        printf("Kontakt %d: %s %s, %s\n", i + 1, imenik[i]->ime, imenik[i]->prezime, imenik[i]->brojTelefona);
    }
    for (int i = 0; i < n; i++) free(imenik[i]);
    free(imenik);
    return 0;
}
