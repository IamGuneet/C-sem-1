// function syntax
//  retur type function name(parameters)
// Ex: int avg(int,int){}

#include <stdio.h>

// comparing function
void bigOfTwoNums(int a, int b)
{
    if (a > b)
    {
        printf("first number is greater than second");
    }
    if (a < b)
    {
        printf("second number is greater than first number");
    }
    else
    {
        printf("Both numbers are equal");
    }
}


//main function
void main()
{
    printf("Enter 2 Numbers\n");

    int a, b;
    scanf("%d \n %d", &a, &b);

    // printf("Calling bigOfTwoNums\n");
    // printf("%d\n",a);
    // printf("%d",b);
    bigOfTwoNums(a, b);
}

