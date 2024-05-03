#include<stdio.h>

int main(void){

    float largestNum, userInput; 
    printf("Enter a number: ");
    scanf("%f", &largestNum);

    for(int i = 0; i < 3; i++){
        printf("Enter a number: ");
        scanf("%f", &userInput);

        if(userInput > largestNum){
            largestNum = userInput;
        }

    }

    printf("Largest number is: %f", largestNum);

    return 0;
}