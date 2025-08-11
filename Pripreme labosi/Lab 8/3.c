void generirajSlucajniRedak(int n, int *mat) {
    int red = rand() % n;
    for (int j = 0; j < n; j++) {
        mat[red * n + j] = rand() % 7 + 2;
    }
}
