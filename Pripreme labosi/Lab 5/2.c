void getMinMax(int *polje, int n, int *min, int *max) {
    *min = *max = *polje;
    for (int i = 1; i < n; i++) {
        if (*(polje + i) < *min) *min = *(polje + i);
        if (*(polje + i) > *max) *max = *(polje + i);
    }
}
