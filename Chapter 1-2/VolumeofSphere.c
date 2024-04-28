#include<stdio.h>
#define PI 3.14159

int main(void){
    float radius;

    printf("Enter the radius: ");
    scanf("%f", &radius);
    float volume = 4.0f/3.0f * PI * (radius*radius*radius);
    printf("Volume is: %.1f", volume);

    return 0;
}