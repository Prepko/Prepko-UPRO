#include <stdio.h>
#include <ctype.h>

int main() {
    char s1[101], s2[101];
    printf("Upisite s1 > ");
    fgets(s1, 101, stdin);
    printf("Upisite s2 > ");
    fgets(s2, 101, stdin);
    int i = 0, j = 0, rez = 0;
    while (s1[i] && s1[i] != '\n') i++;
    s1[i] = '\0';
    i = 0;
    while (s2[i] && s2[i] != '\n') i++;
    s2[i] = '\0';
    i = j = 0;
    while (1) {
        while (s1[i] == ' ') i++;
        while (s2[j] == ' ') j++;
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[j]);
        if (c1 == '\0' && c2 == '\0') { rez = 0; break; }
        if (c1 == '\0' || c1 < c2) { rez = -1; break; }
        if (c2 == '\0' || c1 > c2) { rez = 1; break; }
        i++; j++;
    }
    if (rez == 0) {
        printf("(%s)=(%s)\n", s1, s2);
    } else if (rez < 0) {
        printf("(%s)<(%s)\n", s1, s2);
        printf("Razlika na indeksima: (s1:%d, s2:%d)\n", i, j);
    } else {
        printf("(%s)>(%s)\n", s1, s2);
        printf("Razlika na indeksima: (s1:%d, s2:%d)\n", i, j);
    }
    return 0;
}
