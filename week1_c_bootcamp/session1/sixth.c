
#include <stdio.h> 

int main()
{
    float length ;
    float width ;
    float area ;

    printf("Enter the length\n ") ;
    scanf ("%f",&length) ;
    printf("Enter the width\n ") ;
    scanf ("%f",&width) ;

    area = length * width ;

    printf("The area is= %f\n",area) ; 

    return 0;
}