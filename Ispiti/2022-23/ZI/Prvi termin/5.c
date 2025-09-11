int postaviBitove(unsigned short int *pokNaBroj, int n) {
    int brojPromjena = 0;
    for (int i = 0; i < n; i++) {
        unsigned short mask = 1 << i;
        if (((*pokNaBroj) & mask) == 0) brojPromjena++;
        *pokNaBroj |= mask;
    }
    return brojPromjena;
}
