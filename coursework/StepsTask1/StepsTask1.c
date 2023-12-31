#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Define any additional variables here



// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

}

// Complete the main function
int main(){

    FILE *fp;
    int record_count = 0;
    FITNESS_DATA fitness_data;

    fp = fopen("FitnessData_2023.csv", "r");

    if (fp == NULL){
        printf("could not read file. \n");
        exit(0);
    }
    char line[100];
    while(fgets(line, 100, fp) != NULL){
        record_count += 1;  
        tokeniseRecord(line, ",", fitness_data.date, fitness_data.time, &fitness_data.steps) ;
        if(record_count < 4){
            printf("%s/%s/%s", fitness_data.date, fitness_data.time, &fitness_data.steps);
        }
    }
    
    printf("Number of records in file: %d\n", record_count);
    
    fclose(fp);
    return 0;
}