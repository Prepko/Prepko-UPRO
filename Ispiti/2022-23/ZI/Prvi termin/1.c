float zamijeniRetke(float *polje, int brRed, int brStup, int indRed1, int indRed2) {
    if (indRed1 == indRed2) return 0;
    if (indRed1 > indRed2) {
        int t = indRed1;
        indRed1 = indRed2;
        indRed2 = t;
    }
    float suma1 = 0, suma2 = 0;
    for (int j = 0; j < brStup; j++) {
        suma1 += *(polje + indRed1 * brStup + j);
        suma2 += *(polje + indRed2 * brStup + j);
    }
    for (int j = 0; j < brStup; j++) {
        float tmp = *(polje + indRed1 * brStup + j);
        *(polje + indRed1 * brStup + j) = *(polje + indRed2 * brStup + j);
        *(polje + indRed2 * brStup + j) = tmp;
    }
    return suma1 - suma2;
}
