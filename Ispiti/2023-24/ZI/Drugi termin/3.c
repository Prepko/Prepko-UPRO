int brojiDjelj3Kumulativno(int *p, int n, int delta) {
    static int index = 0;
    static int suma = 0;
    for (int k = 0; k < delta && index < n; k++, index++) {
        if (p[index] % 3 == 0) suma++;
    }
    return suma;
}
