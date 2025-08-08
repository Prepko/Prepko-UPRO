void delCharFromName(struct person_s *s, char c) {
    int i = 0, j = 0;
    while (s->name[i] != '\0') {
        if (s->name[i] != c) {
            s->name[j++] = s->name[i];
        }
        i++;
    }
    s->name[j] = '\0';
}
