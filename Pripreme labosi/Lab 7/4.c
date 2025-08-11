bool capitalizeName(struct person_s *person) {
    if (person->name[0] == '\0') return false;
    int novi = 1;
    for (int i = 0; person->name[i] != '\0'; i++) {
        if (novi && person->name[i] >= 'a' && person->name[i] <= 'z') {
            person->name[i] = person->name[i] - ('a' - 'A');
            novi = 0;
        } else if (!novi && person->name[i] >= 'A' && person->name[i] <= 'Z') {
            person->name[i] = person->name[i] + ('a' - 'A');
        } else if (person->name[i] == ' ' || person->name[i] == '-') {
            novi = 1;
        } else {
            novi = 0;
        }
    }
    return true;
}
