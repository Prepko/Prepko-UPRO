int zajednickiDjelitelj(int *matrica, int m, int n) {
    for (int i = 0; i < m * n; i++) {
        int kandidat = matrica[i];
        int djeljiv = 1;
        for (int j = 0; j < m * n; j++) {
            if (matrica[j] % kandidat != 0) {
                djeljiv = 0;
                break;
            }
        }
        if (djeljiv) {
            return kandidat;
        }
    }
    return 1;
}

void podijeli(int *matrica, int m, int n, int *rezultat) {
    int djelitelj = zajednickiDjelitelj(matrica, m, n);
    for (int i = 0; i < m * n; i++) {
        rezultat[i] = matrica[i] / djelitelj;
    }
}
