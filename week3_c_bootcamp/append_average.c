#include <stdio.h>
#include <stdlib.h>

int main(){

    int sum, n ;
    float average ; 
    int number, num_lines = 10 ;
    
    char filename [] = "numbers.dat";
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        perror("");
        return 1;
    }

    
    printf("Type %d numbers: ", num_lines);
    for (int i = 0; i < num_lines; i++) {
        scanf("%d", &number);
        fprintf(file, "%d\n", number);
    }

    int buffer_size = 100;
    char line_buffer[buffer_size];
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        sum += atof(line_buffer) ;
        n += 1 ;
    }

    average = sum / n ;
    fprintf(file, "%f \n", average) ;
    fclose(file);
    return 0;

}