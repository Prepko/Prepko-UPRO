#include <stdlib.h>

void igra(int seed, int brojBacanja, int *pobjednik, int *razlika) {
    srand(seed);
    int s1 = 0, s2 = 0;
    for (int i = 0; i < brojBacanja; i++) {
        s1 += rand() % 6 + 1;
        s2 += rand() % 6 + 1;
    }
    if (s1 > s2) {
        *pobjednik = 1;
        *razlika = s1 - s2;
    } else if (s2 > s1) {
        *pobjednik = 2;
        *razlika = s2 - s1;
    } else {
        *pobjednik = 0;
        *razlika = 0;
    }
}
