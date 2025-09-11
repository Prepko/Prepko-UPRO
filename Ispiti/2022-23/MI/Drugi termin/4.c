#include <stdio.h>
#include <string.h>

int main() {
    char s[31];
    printf("Upisite niz > ");
    fgets(s, 31, stdin);
    int n = strlen(s);
    if (s[n - 1] == '\n') {
        s[n - 1] = '\0';
        n--;
    }
    int imin = 0, imax = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] <= s[imin]) imin = i;
        if (s[i] > s[imax]) imax = i;
    }
    printf("imin = %d, imax = %d\n", imin, imax);
    if (imin <= imax) {
        for (int i = imin; i <= imax; i++) printf("%c", s[i]);
    } else {
        for (int i = imin; i >= imax; i--) printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}
