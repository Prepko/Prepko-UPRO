#include <string.h>

_Bool anagram(char s1[], char s2[], int *isti) {
    *isti = 0;
    int freq1[256] = {0};
    int freq2[256] = {0};
    for (int i = 0; s1[i] != '\0'; i++) freq1[(unsigned char)s1[i]]++;
    for (int i = 0; s2[i] != '\0'; i++) freq2[(unsigned char)s2[i]]++;
    for (int i = 0; i < 256; i++) {
        if (freq1[i] > 0 && freq2[i] > 0) *isti += freq1[i] < freq2[i] ? freq1[i] : freq2[i];
    }
    for (int i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) return 0;
    }
    return 1;
}

#include <stdio.h>

int main() {
    char s1[21], s2[21];
    printf("Unesi dvije rijeci > \n");
    scanf("%s %s", s1, s2);
    int isti;
    if (anagram(s1, s2, &isti)) printf("Anagrami.\n");
    else printf("Nisu anagrami.\n");
    printf("Broj podudaranja: %d", isti);
    return 0;
}
