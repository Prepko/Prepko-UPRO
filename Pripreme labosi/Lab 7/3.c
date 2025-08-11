struct pravokutnik {
    int x1;
    int y1;
    int x2;
    int y2;
};

extern struct pravokutnik rjesenje;

void nadiNajveciOpseg(int n, struct pravokutnik *pravokutnici) {
    int max_opseg = 0;
    for (int i = 0; i < n; i++) {
        int sirina = pravokutnici[i].x1 - pravokutnici[i].x2;
        if (sirina < 0) sirina = -sirina;
        int visina = pravokutnici[i].y1 - pravokutnici[i].y2;
        if (visina < 0) visina = -visina;
        int opseg = 2 * (sirina + visina);
        if (opseg > max_opseg) {
            max_opseg = opseg;
            rjesenje = pravokutnici[i];
        }
    }
}
