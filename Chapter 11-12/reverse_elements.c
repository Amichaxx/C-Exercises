#include<stdio.h>

int main(void){
    int array[] = {1,2,3,4,5,6};
    int size = sizeof(array) / sizeof(array[0]);
    int temp;

    int *l = array;
    int *r = array + size - 1;
    
    while(l<r){

        temp = *l; 
        *l = *r;
        *r = temp;

        *l++;
        *r--;
    }

    printf("Your reversed array: ");

    for (int i = 0; i < size; i++){
        printf("%d", array[i]);

    }

    return 0;

}