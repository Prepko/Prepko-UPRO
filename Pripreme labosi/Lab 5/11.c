#include <stdio.h>

int ProvjeriLozinku(char *password, int *brVelikih, int *brBrojeva, int *brSpec) {
    int duljina = 0;
    for (int i = 0; password[i] != '\0'; i++) {
        char c = password[i];
        duljina++;
        if (c >= 'A' && c <= 'Z') (*brVelikih)++;
        else if (c >= '0' && c <= '9') (*brBrojeva)++;
        else if (c == '!' || c == '?' || c == '*' || c == '#') (*brSpec)++;
    }
    return duljina;
}

int main() {
    char lozinka[11];
    printf("Upisite lozinku > ");
    scanf("%s", lozinka);
    int v = 0, b = 0, s = 0;
    int duljina = ProvjeriLozinku(lozinka, &v, &b, &s);
    if (duljina != 10) printf("\nLozinka je prekratka!");
    else {
        int ispravna = 1;
        if (v < 2) {
            printf("\nNema dovoljno velikih slova!");
            ispravna = 0;
        }
        if (b < 2) {
            printf("\nNema dovoljno brojeva!");
            ispravna = 0;
        }
        if (s < 1) {
            printf("\nNema dovoljno specijalnih znakova!");
            ispravna = 0;
        }
        if (ispravna) printf("\nLozinka je ispravna!");
    }
    return 0;
}
