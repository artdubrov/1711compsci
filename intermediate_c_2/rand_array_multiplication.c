#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void assignValues(int a[][4]){
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            a[i][j] = rand() % 11; // rand() % 11 gives a range 0 to 10
        }
    }
}

void printValues(int a[][4]){
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int array1[3][4];
    int array2[3][4];
    int array3[3][4];
    int i, j, n;

    // Seed the random number generator
    srand(time(NULL));

    // Assign random values to each element of the array
    assignValues(array1);
    assignValues(array2);
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            array3[i][j] = array1[i][j] * array2[i][j];
        }
    }

    // Print the array to verify
    printf("array 1: \n");
    printValues(array1);
    printf("array 2: \n");
    printValues(array2);
    printf("product of each element: \n");
    printValues(array3);

    return 0;
}