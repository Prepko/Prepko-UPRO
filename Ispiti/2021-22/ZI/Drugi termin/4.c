_Bool txt2bin(char *inputFile, char *outputFile) {
    FILE *fin = fopen(inputFile, "r");
    if (!fin) return 0;
    FILE *fout = fopen(outputFile, "wb+");
    if (!fout) {
        fclose(fin);
        return 0;
    }
    int code, x, y;
    while (fscanf(fin, "%2d%3d%3d", &code, &x, &y) == 3) {
        struct record r;
        r.code = code;
        r.x = x;
        r.y = y;
        fseek(fout, (code-1) * sizeof(struct record), SEEK_SET);
        fwrite(&r, sizeof(struct record), 1, fout);
    }
    fclose(fin);
    fclose(fout);
    return 1;
}
