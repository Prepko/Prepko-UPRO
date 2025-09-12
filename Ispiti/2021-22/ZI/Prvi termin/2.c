tocka_t *pokNaNajblizuTocku(tocka_t *p, int n) {
    int idx = 0;
    double min = p[0].x * p[0].x + p[0].y * p[0].y;
    for (int i = 1; i < n; i++) {
        double d = p[i].x * p[i].x + p[i].y * p[i].y;
        if (d < min || d == min) {
            min = d;
            idx = i;
        }
    }
    return &p[idx];
}
