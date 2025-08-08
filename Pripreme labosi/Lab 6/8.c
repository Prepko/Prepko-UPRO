void prebrojiPojave(char *niz, char znak, int *broj) {
    *broj = 0;
    if (znak >= 'A' && znak <= 'Z') {
        znak += 32;
    }
    for (int i = 0; niz[i] != '\0'; i++) {
        char c = niz[i];
        if (c >= 'A' && c <= 'Z') {
            c += 32;
        }
        if (c == znak) {
            (*broj)++;
        }
    }
}
