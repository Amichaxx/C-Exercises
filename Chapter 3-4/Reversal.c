#include<stdio.h>

int main(void){

    int num1, num2, num3, userInput;
    printf("Enter a number: ");
    scanf("%d", &userInput);
    num1 = userInput / 100; //7
    num2 = (userInput / 10) - (num1 * 10); // (79) - (7*10)
    num3 = userInput % 10;

    printf("Reversed number: %d%d%d", num3, num2, num1);

    return 0;
}