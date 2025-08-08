void obrni(char *src, char *dst) {
    int len = 0;
    while (src[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len; i++) {
        dst[i] = src[len - 1 - i];
    }
    dst[len] = '\0';
}
