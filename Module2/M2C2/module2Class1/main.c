// C prograamme to accept 2 int and check if they are equal or not
#include <stdio.h>

void main()
{

    int a, b;
    printf("enter int a: \n");
    scanf("%d", &a);
    printf("enter int b: \n");
    scanf("%d", &b);

    if (a == b)
    {
        printf(" Integers are Equal !!!");
    }
    else if(a > b)
    {
        printf("a is greater than b");
    }
    else if ( a < b)
    {
        printf("b is greater than a");
    }
    
}