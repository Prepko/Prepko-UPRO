void compress(unsigned char *p, int len) {
    int j = 0;
    for (int i = 0; i < len; i += 2) {
        unsigned char left = p[i] << 4;
        unsigned char right = (i + 1 < len) ? p[i + 1] : 0;
        p[j++] = left | right;
    }
}
