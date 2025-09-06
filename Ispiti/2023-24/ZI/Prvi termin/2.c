void spojiNizove(char *niz1, char *niz2, char *rez) {
    int i = 0, j = 0, k = 0;
    while (niz1[i] || niz2[j]) {
        if (niz1[i]) {
            if (niz1[i]) rez[k++] = niz1[i++];
            if (niz1[i]) rez[k++] = niz1[i++];
        }
        if (niz2[j]) {
            if (niz2[j]) rez[k++] = niz2[j++];
            if (niz2[j]) rez[k++] = niz2[j++];
        }
    }
    rez[k] = '\0';
}
