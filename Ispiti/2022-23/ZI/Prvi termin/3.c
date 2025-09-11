#include <stdbool.h>
#include <ctype.h>

bool capitalizeName(char *name) {
    if (name[0] == '\0') return false;
    int newWord = 1;
    for (int i = 0; name[i] != '\0'; i++) {
        if (isalpha((unsigned char)name[i])) {
            if (newWord) {
                name[i] = toupper((unsigned char)name[i]);
                newWord = 0;
            } else {
                name[i] = tolower((unsigned char)name[i]);
            }
        } else if (name[i] == ' ' || name[i] == '-') {
            newWord = 1;
        }
    }
    return true;
}
