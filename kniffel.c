#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define NUM_DICE 5
#define NUM_ROUNDS 5

// simulating a six-side die with values 1 to 6
int rollDie() {
    return((rand() % 6) + 1);
}

void printDiceStore(int diceStore[], int numStore)
{
    int diceValue = 0;
    printf("current store: ");
    for (int i = 0; i < numStore; i++) {
        printf(" %d", diceStore[i]);
        diceValue += diceStore[i];
    }
    printf(" = %d\n", diceValue);
}


void rollDice(int dice[], int numDice) 
{
    for (int i = 0; i < numDice; ++i) {
        dice[i] = rollDie();
    }
}


void printDice(int dice[], int numDice) 
{
    printf("current dice: ");
    for (int i = 0; i < numDice; ++i) {
        printf("[%d] -> %d   ", i, dice[i]);
    }
    printf("\n");
}


int main(int argc, char const *argv[])
{
    // initialize random number generator with 
    srand((unsigned)time(NULL));

    printf("Welcome to Kniffel!\n");

    int dice[NUM_DICE];
    
    int numDice = NUM_DICE;

    for (int round = 0; round < NUM_ROUNDS; round++) {
        rollDice(dice, NUM_DICE);
        printDice(dice, NUM_DICE);
        printf("select numbers of die to keep: ");        // scanf("%s", &selection);
        // 
        // select
        // q -> break
        // 1 1,2 1,2,3 -> max 3, min 0
        // gewählte in store übernehmen
        // anzahl würfel verringern
        // wenn kein würfel mehr -> break
    }
    // result


    printf("... bye!\n");

    return 0;
}
