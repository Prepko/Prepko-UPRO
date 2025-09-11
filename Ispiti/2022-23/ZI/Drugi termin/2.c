#include <math.h>

double dist2D(double *mat, double *rez, int vel) {
    double ukupno = 0;
    rez[0] = sqrt(mat[0] * mat[0] + mat[1] * mat[1]);
    ukupno += rez[0];
    for (int i = 1; i < vel; i++) {
        double dx = *(mat + 2 * i) - *(mat + 2 * (i - 1));
        double dy = *(mat + 2 * i + 1) - *(mat + 2 * (i - 1) + 1);
        rez[i] = sqrt(dx * dx + dy * dy);
        ukupno += rez[i];
    }
    return ukupno;
}
