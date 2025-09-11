#include <stdlib.h>

int playRollTheDice(int noOfDiceSides, int diceStartNumber, int noOfRolls) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < noOfRolls; i++) {
        int r = rand() % noOfDiceSides;
        sum1 += diceStartNumber * (r + 1);
    }
    for (int i = 0; i < noOfRolls; i++) {
        int r = rand() % noOfDiceSides;
        sum2 += diceStartNumber * (r + 1);
    }
    if (sum1 > sum2) return 1;
    if (sum2 > sum1) return 2;
    return 0;
}
