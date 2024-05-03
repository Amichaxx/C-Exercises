#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void){
    int m[5][5] = {{4,5,6,7,12},
    {3,5,7,12,10},
    {1,5,3,7,12},
    {4,5,6,6,12},
    {1,4,6,3,6}};

    int rowSums[5] = {};
    int columnSums[5] = {};

    int i, j, rowSum, columnSum;

    // add rows 
    for (i = 0; i < 5; i++){
        rowSum = 0;
        for(j = 0; j < 5; j++){
            rowSum += m[i][j];
            rowSums[i] = rowSum;
        }

    }

    // add columns

    for (j = 0; j < 5; j++){
        columnSum = 0;
        for(i = 0; i < 5; i++){
            columnSum += m[i][j];
        }
        columnSums[j] = columnSum;
    }



    printf("Row sums:\n");

    for (int i = 0; i < 5; i++) {
        printf("Row %d: %d\n", i + 1, rowSums[i]);
    }

    printf("Column sums:\n");
    for (int i = 0; i < 5; i++) {
        printf("Column %d: %d\n", i + 1, columnSums[i]);
    }


    return 0;
 }