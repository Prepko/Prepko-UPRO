int nulovanje(int *a, int m, int n) {
    int max = a[0], maxr = 0, maxc = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int val = *(a + i*n + j);
            if (val > max || (val == max && (i > maxr || (i == maxr && j < maxc)))) {
                max = val;
                maxr = i;
                maxc = j;
            }
        }
    }
    int suma = 0;
    for (int j = 0; j < n; j++) {
        suma += *(a + maxr*n + j);
        *(a + maxr*n + j) = 0;
    }
    for (int i = 0; i < m; i++) {
        if (*(a + i*n + maxc) != 0) {
            suma += *(a + i*n + maxc);
            *(a + i*n + maxc) = 0;
        }
    }
    return suma;
}
