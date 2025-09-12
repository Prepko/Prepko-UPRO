#include <stdlib.h>
#include <string.h>

void generirajLozinku (unsigned int sjeme, const char *znakoviZaLozinku, int duljLoz, char *lozinka) {
    srand(sjeme);
    int len = strlen(znakoviZaLozinku);
    for (int i = 0; i < duljLoz; i++) {
        lozinka[i] = znakoviZaLozinku[rand() % len];
    }
    lozinka[duljLoz] = '\0';
}
