#include<stdio.h>

int main(void){
    int userInput;
    printf("Enter a number: ");
    scanf("%d", &userInput);

    if  (userInput < 10){
        printf("Your number has 1 digit");
    }
    else if (userInput < 100){
        printf("Your number has 2 digits");
    }
    else if (userInput < 1000){
        printf("Your number has 3 digits");
    }
    else if (userInput < 10000){
        printf("Your number has 4 digits");
    }
    else{
        printf("Your numbre is more than 4 digits");
    }

    return 0;
}