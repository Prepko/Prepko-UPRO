#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char *dupstr(const char *s) {
    size_t n = strlen(s) + 1;
    char *d = (char *) malloc(n);
    if (d) memcpy(d, s, n);
    return d;
}

int main() {
    char word[64];
    char **lista = NULL;
    int cap = 0, cnt = 0;
    while (scanf("%63s", word) == 1) {
        int len = strlen(word);
        int kraj = len > 0 && word[len - 1] == '.';
        if (cnt == cap) {
            cap = cap ? cap * 2 : 8;
            char **tmp = (char **) realloc(lista, cap * sizeof(char *));
            if (!tmp) return 0;
            lista = tmp;
        }
        lista[cnt++] = dupstr(word);
        if (kraj) break;
    }
    for (int i = 0; i < cnt; i++) {
        printf("%s ", lista[i]);
        free(lista[i]);
    }
    free(lista);
    printf("\n");
    return 0;
}
