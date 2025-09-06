void parnepar(char* ulazdat, char* izlazdat) {
    FILE *in = fopen(ulazdat, "rb");
    FILE *out = fopen(izlazdat, "w");
    if (!in || !out) {
        if (in) fclose(in);
        if (out) fclose(out);
        return;
    }

    struct zapis_s polje[1000];
    int n = 0;

    while (fread(&polje[n], sizeof(struct zapis_s), 1, in) == 1) n++;

    for (int i = 0; i < n; i++) {
        if (polje[i].sifra % 2 == 0) {
            if (i > 0) fprintf(out, "%s %d\n", polje[i-1].naziv, polje[i-1].sifra);
            fprintf(out, "%s %d\n", polje[i].naziv, polje[i].sifra);
        } else {
            fprintf(out, "%s %d\n", polje[i].naziv, polje[i].sifra);
            if (i+1 < n) fprintf(out, "%s %d\n", polje[i+1].naziv, polje[i+1].sifra);
        }
    }

    fclose(in);
    fclose(out);
}
