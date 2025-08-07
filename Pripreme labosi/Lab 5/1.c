int PovecajKonvertiraj(float *placa, int bonus, float *postotak) {
    float stara = *placa;
    *placa += bonus;
    *postotak = (bonus / stara) * 100.0;
    *placa /= 7.5345;
    if (*postotak >= 10.0) return 1;
    return 0;
}
