void BrojSlovaZnamenaka(char niz[], int *brojSlova, int *brojZnamenaka) {
    for (int i = 0; niz[i] != '\0'; i++) {
        if ((niz[i] >= 'A' && niz[i] <= 'Z') || (niz[i] >= 'a' && niz[i] <= 'z')) (*brojSlova)++;
        else if (niz[i] >= '0' && niz[i] <= '9') (*brojZnamenaka)++;
    }
}
