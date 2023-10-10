#include <stdio.h>

int main()
{
    int num1;

    printf("enter a number \n");
    scanf("%d",num1);


    if (&num1 % 2 == 0){
        printf("evne");
    }
    else {
        printf("odd");
    }

    return 0;
}