#include<stdio.h>

int add_numbers(int array[], int size);

int main(void){

    int array[] = {4,3,1,2,3};
    int size_of_array = sizeof(array) / sizeof(array[0]);
    printf("The sum is: %d", add_numbers(array, size_of_array));
}

int add_numbers(int array[], int size){
    int sum;
    sum = 0;
    int *p = array;

    for(int i = 0; i < size; i++){
        sum += *(p+i);
    }

    return sum;

}