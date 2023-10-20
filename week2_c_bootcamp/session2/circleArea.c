#include <stdio.h>
#include <math.h>

float circleArea(float radius)
{
    float area ;
    area = radius * radius * M_PI ;
    return area ;
}

float main()
{
    float radC ;
    printf("enter the radius \n") ;
    scanf("%f", &radC) ;

    float areaC = circleArea(radC) ;
    printf("the area of the circle is %f\n", areaC) ;
    return 0 ;
}