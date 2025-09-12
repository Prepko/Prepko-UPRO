#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[11];
    printf("Unesite niz znakova > ");
    fgets(s, 11, stdin);
    int n = strlen(s);
    if (s[n - 1] == '\n') {
        s[n - 1] = '\0';
        n--;
    }

    int start = 1;
    for (int i = 0; i < n; i++) {
        if (isalpha((unsigned char)s[i])) {
            if (start) {
                s[i] = toupper((unsigned char)s[i]);
                start = 0;
            } else {
                s[i] = tolower((unsigned char)s[i]);
            }
            if (i + 1 == n || s[i + 1] == ' ') {
                s[i] = toupper((unsigned char)s[i]);
            }
        } else if (s[i] == ' ') {
            start = 1;
        }
    }

    printf("Rezultat: %s\n", s);
    return 0;
}
