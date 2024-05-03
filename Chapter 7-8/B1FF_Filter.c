#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void){
    char userInput[100];
    printf("Enter your message: ");
    scanf("%s", userInput);

    for (int i = 0; i < strlen(userInput); i++){
        userInput[i] = toupper(userInput[i]);

        if (userInput[i] == 'A'){
            userInput[i] = '4';
        }
        else if(userInput[i] == 'I'){
            userInput[i] = '1';
        }
        else if (userInput[i] == 'E'){
            userInput[i] = '3';
        }
        else if (userInput[i] == 'O'){
            userInput[i] = '0';
        }
        else if (userInput[i] == 'S'){
            userInput[i] = '5';
        }

    }
    int length = strlen(userInput);

    for (int i = 0; i < 5; i++) {
        userInput[length + i] = '!';
    }

    userInput[length + 5] = '\0';

    printf("Modified message: %s\n", userInput);
    
    return 0;
} 