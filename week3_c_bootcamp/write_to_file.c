#include <stdio.h>
#include "utils.h"

int main() {
    char filename [] = "data.txt";
    FILE *file = fopen(filename, "a+"); // or "a", "w+", "r"
    if (file == NULL) {
        perror("");
        return 1;
    }

    int number, num_lines = 10;
    printf("Type %d numbers: ", num_lines);
    for (int i = 0; i < num_lines; i++) {
        scanf("%d", &number);
        fprintf(file, "%d\n", number);
    }
    
    fclose(file);
    return 0;
}