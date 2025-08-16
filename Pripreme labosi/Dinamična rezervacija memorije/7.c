static int cmpdesc(const void *a, const void *b) {
    const struct skillNameCount_s *x = (const struct skillNameCount_s *) a;
    const struct skillNameCount_s *y = (const struct skillNameCount_s *) b;
    if (y->count != x->count) return y->count - x->count;
    return strcmp(x->skillName, y->skillName);
}

int main() {
    FILE *fp = fopen("competitors.txt", "r");
    if (!fp) return 0;
    struct skillNameCount_s *arr = NULL;
    int br = 0, cap = 0;
    struct hackathonCompetitor_s c;
    while (fscanf(fp, "%d %d %20s %d", &c.idCompetitor, &c.age, c.skillName, &c.experienceYears) == 4) {
        int found = -1;
        for (int i = 0; i < br; i++) if (strcmp(arr[i].skillName, c.skillName) == 0) {
            found = i;
            break;
        }
        if (found == -1) {
            if (br == cap) {
                cap = cap ? cap * 2 : 8;
                struct skillNameCount_s *tmp = (struct skillNameCount_s *) realloc(
                    arr, cap * sizeof(struct skillNameCount_s));
                if (!tmp) {
                    free(arr);
                    fclose(fp);
                    return 0;
                }
                arr = tmp;
            }
            strcpy(arr[br].skillName, c.skillName);
            arr[br].count = 1;
            br++;
        } else {
            arr[found].count++;
        }
    }
    fclose(fp);
    qsort(arr, br, sizeof(*arr), cmpdesc);
    for (int i = 0; i < br; i++) printf("Broj natjecatelja za vjestinu %s: %d\n", arr[i].skillName, arr[i].count);
    free(arr);
    return 0;
}
