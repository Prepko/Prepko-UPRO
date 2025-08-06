#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[201];
    printf("Upisite znakovni niz > ");
    fgets(s, 201, stdin);
    int len = strlen(s);
    if (s[len - 1] == '\n') s[--len] = '\0';

    printf("Obrnuti niz: ");
    for (int i = len - 1; i >= 0; i--) {
        char c = s[i];
        if (islower(c)) c = toupper(c);
        printf("%c", c);
    }
    printf("\n");
    return 0;
}
