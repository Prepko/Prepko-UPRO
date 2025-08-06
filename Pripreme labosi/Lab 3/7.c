#include <stdio.h>

int main() {
    char s[151], novi[151];
    printf("Upisite znakovni niz > ");
    fgets(s, 151, stdin);
    int j = 0;
    for (int i = 0; s[i]; i++)
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
            novi[j++] = s[i];

    if (j == 0) printf("Izlazni znakovni niz je : prazan string\n");
    else {
        novi[j] = '\0';
        printf("Izlazni znakovni niz je : %s\n", novi);
    }
    return 0;
}
