void odrediBrojNominacija(const char *imeDatTxt, const char *imeDatBin) {
    FILE *ft = fopen(imeDatTxt, "r");
    FILE *fb = fopen(imeDatBin, "wb+");
    struct oscar_s rec;
    int sif;
    char naziv[31];
    int god, sifF;
    char film[51];
    while (fscanf(ft, "%d;%30[^;];%d;%d;%50[^\n]\n", &sif, naziv, &god, &sifF, film) == 5) {
        fseek(fb, (sif - 1) * sizeof(struct oscar_s), SEEK_SET);
        if (fread(&rec, sizeof(rec), 1, fb) == 0 || rec.sifKategorija == 0) {
            rec.sifKategorija = sif;
            strcpy(rec.nazivKategorija, naziv);
            rec.ukNominacija = 1;
        } else {
            rec.ukNominacija++;
        }
        fseek(fb, (sif - 1) * sizeof(struct oscar_s), SEEK_SET);
        fwrite(&rec, sizeof(rec), 1, fb);
    }
    fclose(ft);
    fclose(fb);
}
