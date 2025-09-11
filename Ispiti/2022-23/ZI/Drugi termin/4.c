#include <stdio.h>
#include <stdlib.h>

int brojJednakih(char *trgovina1, char *trgovina2) {
    FILE *f1 = fopen(trgovina1, "r");
    FILE *f2 = fopen(trgovina2, "r");
    if (!f1 || !f2) {
        if (f1) fclose(f1);
        if (f2) fclose(f2);
        return -1;
    }
    int sif1, sif2;
    double cijena;
    int count = 0;
    while (fscanf(f1, "%d#%lf", &sif1, &cijena) == 2) {
        rewind(f2);
        while (fscanf(f2, "%d#%lf", &sif2, &cijena) == 2) {
            if (sif1 == sif2) {
                count++;
                break;
            }
        }
    }
    fclose(f1);
    fclose(f2);
    return count;
}
