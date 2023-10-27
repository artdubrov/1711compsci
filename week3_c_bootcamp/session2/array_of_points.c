#include <stdio.h>
#include <stdlib.h>

typedef struct{
    double x;
    double y;
} point;

int main(){
    int number_of_points = 4, i;
    point co_ordinates[] = {
        {0, 0},
        {5, 1},
        {3, 2},
        {2, 7},
        {1, 0},
    } ;

    for(i = 0; i<=number_of_points; i++){
        printf("(%f, %f)\n", co_ordinates[i].x, co_ordinates[i].y);
    }
    return 0;


}