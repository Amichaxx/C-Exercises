#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>

int roll_dice(void);
bool play_game(void);

int main(void) {
    char userInput;
    srand(time(NULL));

    do {
        if (play_game()) {
            printf("You won.\n");
        } else {
            printf("You lost.\n");
        }

        printf("Would you like to play again? (Y/N): ");
        scanf(" %c", &userInput); // Corrected input format string

        // Clear the input buffer
        while (getchar() != '\n');

    } while (userInput == 'Y' || userInput == 'y');

    return 0;
}

int roll_dice(void) {
    int num1, num2;
    num1 = (rand() % 6) + 1; 
    num2 = (rand() % 6) + 1; 
    return num1 + num2;
}

bool play_game(void) {
    int point;
    int roll = roll_dice();
    printf("You rolled: %d\n", roll);

    if (roll == 7 || roll == 11) {
        printf("Natural\n");
        return true;
    } else if (roll == 2 || roll == 3 || roll == 12) {
        printf("Craps\n");
        return false;
    } else {
        point = roll;
        printf("Your point is: %d\n", point);
        while (true) {
            roll = roll_dice();
            printf("You rolled: %d\n", roll);
            if (roll == point) {
                return true;
            } else if (roll == 7) {
                return false;
            }
        }
    }
}
