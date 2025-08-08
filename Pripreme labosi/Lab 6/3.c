void stddev(float *a, int n, float *std) {
    float sum = 0, mean, dev = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    mean = sum / n;
    for (int i = 0; i < n; i++) {
        dev += (a[i] - mean) * (a[i] - mean);
    }
    *std = sqrt(dev / n);
}

int IndexOfMaxdev(float *a, int n, int m) {
    float max = -1, val;
    int idx = 0;
    for (int i = 0; i < n; i++) {
        stddev(a + i * m, m, &val);
        if (val > max) {
            max = val;
            idx = i;
        }
    }
    return idx;
}
