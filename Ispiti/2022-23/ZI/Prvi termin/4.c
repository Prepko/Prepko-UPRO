#include <stdio.h>
#define PRAG 80

struct rezultat {
    char ime[16];
    int bodovi;
};

int najstudenti(char *txtdat, char *bindat) {
    FILE *fin = fopen(txtdat, "r");
    if (!fin) return -1;
    FILE *fout = fopen(bindat, "wb");
    if (!fout) {
        fclose(fin);
        return -1;
    }
    struct rezultat r;
    int count = 0;
    while (fscanf(fin, "%15s %d", r.ime, &r.bodovi) == 2) {
        if (r.bodovi >= PRAG) {
            fwrite(&r, sizeof(struct rezultat), 1, fout);
            count++;
        }
    }
    fclose(fin);
    fclose(fout);
    return count;
}
