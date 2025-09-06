int izracunajElipsu(double a, double b, double *P, double *O, double *e, double *f) {
    if (a < 0 && b < 0) return -1;
    if (a < 0) return -2;
    if (b < 0) return -3;
    if (a < b) return -4;

    *P = PI * a * b;
    *O = 2 * PI * sqrt((a*a + b*b)/2);
    *e = sqrt(1 - (b*b)/(a*a));
    *f = a* *e;
    return 0;
}
