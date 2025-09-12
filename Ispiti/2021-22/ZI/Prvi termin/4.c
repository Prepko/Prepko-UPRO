void increaseLowest(char *fileName, int percentage) {
    FILE *f = fopen(fileName, "rb+");
    if (!f) return;
    struct record r, minr;
    long posMin = -1;
    int minSalary = 0, first = 1;
    long pos = 0;
    while (fread(&r, sizeof(r), 1, f) == 1) {
        if (first || r.salary < minSalary) {
            minSalary = r.salary;
            posMin = pos;
            minr = r;
            first = 0;
        }
        pos++;
    }
    if (posMin != -1) {
        minr.salary = minr.salary + minr.salary * percentage / 100;
        fseek(f, posMin * sizeof(r), SEEK_SET);
        fwrite(&minr, sizeof(r), 1, f);
    }
    fclose(f);
}
