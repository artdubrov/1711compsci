#include <stdio.h>

int main()
{
    int value1 = 5;
    int value2 = 3;
    int temp;

    printf("value 1 is: %d\n",value1);
    printf("value 2 is: %d\n",value2);

    temp = value1;
    value1 = value2;
    value2 = temp;

    printf("new value 1 is: %d\n",value1);
    printf("new value 2 is: %d\n",value2);

    return 0;
}