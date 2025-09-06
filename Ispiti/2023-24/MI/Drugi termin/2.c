#include <stdio.h>

int main() {
    char s1[21], s2[21], spoj[41];
    printf("Unesite prvi niz > ");
    fgets(s1, 21, stdin);
    printf("Unesite drugi niz > ");
    fgets(s2, 21, stdin);
    int l1 = 0; while (s1[l1] && s1[l1] != '\n') l1++;
    int l2 = 0; while (s2[l2] && s2[l2] != '\n') l2++;
    for (int i = 0; i < l1; i++) spoj[i] = s1[i];
    for (int i = 0; i < l2; i++) spoj[l1+i] = s2[l2-1-i];
    spoj[l1+l2] = '\0';
    printf("Spojeni niz > %s\n", spoj);
    return 0;
}
