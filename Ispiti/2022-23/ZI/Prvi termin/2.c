void danMjesec(int rbrDanGodina, int *dan, int *mjesec) {
    int mjeseci[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int m = 0;
    while (rbrDanGodina > mjeseci[m]) {
        rbrDanGodina -= mjeseci[m];
        m++;
    }
    *mjesec = m + 1;
    *dan = rbrDanGodina;
}
