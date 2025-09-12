#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[21];
    int pos;
    printf("Upisite niz > ");
    fgets(s, 21, stdin);
    int n = strlen(s);
    if (s[n - 1] == '\n') {
        s[n - 1] = '\0';
        n--;
    }
    printf("Upisite poziciju > ");
    scanf("%d", &pos);
    if (pos < 1 || pos > n) {
        printf("Neispravna pozicija\n");
        return 0;
    }
    for (int i = pos - 1; i < n - 1; i++) s[i] = s[i + 1];
    s[n - 1] = '\0';
    for (int i = pos - 1; i < n - 1; i++) {
        if (isupper((unsigned char)s[i])) s[i] = tolower(s[i]);
        else if (isdigit((unsigned char)s[i])) s[i] = 'X';
    }
    printf("Rezultat: %s\n", s);
    return 0;
}
