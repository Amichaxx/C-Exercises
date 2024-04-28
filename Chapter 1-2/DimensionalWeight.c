#include<stdio.h>
#define INCHES_PER_POUND 166
/* Name: DimensionalWeight.c
   Purpose: 
   Author: Amina */

int main(void){
    int height;
    scanf("%d", &height);
    int length = 12;
    int width = 10;
    int volume = height*length*width;
    int weight = (volume + 165)/INCHES_PER_POUND;


    printf("Dimensions: %dx%dx%d\n", height, length, width);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}