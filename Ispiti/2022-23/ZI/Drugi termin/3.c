void delCharFromName(char *name, char c) {
    int i = 0, j = 0;
    while (name[i] != '\0') {
        if (name[i] != c) {
            name[j++] = name[i];
        }
        i++;
    }
    name[j] = '\0';
}
