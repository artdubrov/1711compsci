//Reading from file: Write a programme that reads from the file squares.datproduced by the programme in the previous exercise 
//and prints to screen theaverage of all numbers in the file. Make sure you use floating-point data types
//the result need not be an integer!Hint: to convert a string representing an integer to the corresponding valueof type int
//you can use the function atoi (character-to-integer), which isdeclared in the header file stdlib.h

#include <stdio.h>
#include <stdlib.h>

int main(){

    int sum ;
    float average ; 
    int n ;

    char filename [] = "squares.dat";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("");
        return 1;
    }

    int buffer_size = 100;
    char line_buffer[buffer_size];
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        sum += atoi(line_buffer) ;
        n += 1 ;
    }

    average = sum / n ;
    printf("the average is %f \n", average) ;

    fclose(file);
    return 0;


}