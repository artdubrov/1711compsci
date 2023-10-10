#include <stdio.h>

int main()
{
    int num1 ;
    int num2 ;
    int sum ;

    printf("enter first integer\n ");
    scanf("%d",&num1);
    printf("enter second integer\n ");
    scanf("%d",&num2);

    sum = num1 + num2;

    printf("%d\n",sum);

    return 0;

}