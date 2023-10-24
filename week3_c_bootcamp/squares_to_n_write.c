#include <stdio.h>

int main()
{
    char filename [] = "squares.dat" ;
    FILE *file = fopen(filename, "w") ;
    if (file == NULL) {
        perror("") ;
        return 1 ;
    }

    int max, number ;

    printf("enter maximum square you wish for \n") ;
    scanf("%d", &max) ;

    for(int i = 1; i <= max; i++)
    { 
        //scanf("%d", &number) ;
        int square = i * i ;
        fprintf(file, "%d \n", square) ;
    }

    fclose(file) ;
    return 0 ;

}

