void GenerirajTelefonskiBroj(char *broj) {
    for (int i = 0; broj[i] != '\0'; i++) {
        if (broj[i] == 'x') {
            broj[i] = (rand() % 10) + '0';
        } else {
            broj[i] = '-';
        }
    }
}
