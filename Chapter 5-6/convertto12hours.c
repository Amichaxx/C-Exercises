#include<stdio.h>
int main(void){
    int hours, minutes;
    printf("Enter your time in the format xx:xx: ");
    scanf("%i:%i", &hours, &minutes);


    if(hours == 12){
        printf("%i:%ipm", hours, minutes);
    }
    else if(hours > 12){
        printf("%i:%ipm", hours-12, minutes);
    }
    else{
        printf("%i:%i", hours, minutes);
    }

    return 0;
}
