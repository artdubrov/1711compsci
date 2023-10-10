#include <stdio.h>
#include <math.h>


int main()
{
    float radius ;
    float area ; 

    printf("Enter the radius: \n");
    scanf("%f",&radius);
    area = radius * radius * M_PI;
    printf("%f\n",area);
    
    return 0;
}