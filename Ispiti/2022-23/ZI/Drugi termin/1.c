float zamijeniGlavnaD(float *p, int n) {
    for (int i = 0; i < n / 2; i++) {
        float tmp = *(p + i * n + i);
        *(p + i * n + i) = *(p + (n - 1 - i) * n + (n - 1 - i));
        *(p + (n - 1 - i) * n + (n - 1 - i)) = tmp;
    }
    float suma = 0;
    for (int i = 0; i < n; i++) {
        suma += *(p + i * n + (n - 1 - i));
    }
    return suma;
}
