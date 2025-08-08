void duplicirajSamoglasnike(char *ulaz, char *izlaz) {
    while (*ulaz != '\0') {
        *izlaz++ = *ulaz;
        if (*ulaz == 'A' || *ulaz == 'E' || *ulaz == 'I' || *ulaz == 'O' || *ulaz == 'U' || *ulaz == 'a' || *ulaz == 'e' || *ulaz == 'i' || *ulaz == 'o' || *ulaz == 'u') {
            *izlaz++ = *ulaz;
        }
        ulaz++;
    }
    *izlaz = '\0';
}
