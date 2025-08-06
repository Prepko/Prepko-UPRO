#include <stdio.h>
#include <string.h>

int main() {
    char s[51];
    printf("Unesite niz > ");
    fgets(s, 51, stdin);
    int count[128] = {0}, max = 0;
    for (int i = 0; s[i]; i++)
        if (s[i] != '\n') {
            count[(int)s[i]]++;
            if (count[(int)s[i]] > max) max = count[(int)s[i]];
        }

    int broj = 0;
    for (int i = 0; i < 128; i++)
        if (count[i] == max) broj++;

    if (broj == 1) {
        for (int i = 0; i < 128; i++)
            if (count[i] == max) {
                printf("Znak \"%c\" se ponavlja %d puta.\n", i, max);
                break;
            }
    } else {
        printf("Znakovi ");
        int prvi = 1;
        for (int i = 0; i < 128; i++)
            if (count[i] == max) {
                if (!prvi) printf(", ");
                printf("\"%c\"", i);
                prvi = 0;
            }
        printf(" se ponavljaju %d puta.\n", max);
    }
    return 0;
}
