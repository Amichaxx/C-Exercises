#include<stdio.h>

int main(void){

    int userInput, grade;
    printf("Enter a grade: ");
    scanf("%i", &userInput);
    grade = userInput / 10;

    switch(grade){
        case 0: case 1: case 2: case 3: case 4: case 5: {
            printf("F");
            break;
        }
        case 6:{
            printf("D");
            break;
        }
        case 7:{
            printf("C");
            break;
        }
        case 8:{
            printf("B");
            break;
        }
        case 9: case 10:{
            printf("A");
            break;
        }
    }





    return 0;
}