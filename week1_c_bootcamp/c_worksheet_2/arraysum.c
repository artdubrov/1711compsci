#include <stdio.h>

int main()
{
    int num [6] ;
    int sum = 0 ;
    for(int i = 0; i<6; i++)
    {
        num[i] = i;
        printf("%d\n", num[i]);
        sum+=i;
    }
    
    printf("the sum of the array is %d\n", sum);
    return 0;
}