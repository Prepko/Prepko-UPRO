void sumaPotencija(int a, int b, int c, int n, int *rez1, int *rez2) {
    int s1 = 1, s2 = 1, s3 = 1;
    for (int i = 0; i < n; i++) {
        s1 *= a;
        s2 *= b;
        s3 *= c;
    }
    *rez1 = s1 + s2 + s3;
    int suma = a + b + c;
    int r = 1;
    for (int i = 0; i < n; i++) r *= suma;
    *rez2 = r;
}
