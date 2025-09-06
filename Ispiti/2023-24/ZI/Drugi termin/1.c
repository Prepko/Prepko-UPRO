#include <ctype.h>

unsigned int checkPassword(char *password, int minLength, int minUppercase, int minLowercase, int minDigits, int minSpecialChars) {
    int length = 0, upper = 0, lower = 0, digits = 0, special = 0;
    char *s = password;
    while (*s) {
        length++;
        if (*s >= 'A' && *s <= 'Z') upper++;
        else if (*s >= 'a' && *s <= 'z') lower++;
        else if (*s >= '0' && *s <= '9') digits++;
        else if (*s=='!'||*s=='@'||*s=='$'||*s=='%'||*s=='^'||*s=='&'||*s=='*'||*s=='+'||*s=='#') special++;
        s++;
    }
    unsigned int result = 0;
    if (length < minLength) result |= 1;
    if (upper < minUppercase) result |= 2;
    if (lower < minLowercase) result |= 4;
    if (digits < minDigits) result |= 8;
    if (special < minSpecialChars) result |= 16;
    return result;
}
