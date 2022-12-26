// c programme to demonstrate the swapping of two numbers using pointers and function
#include <stdio.h>

void swappingOfNumbers(int *a, int *b)
{
    printf("The swapped the numbers are-\n");
    int t = *a;
    *a = *b;
    *b = t;

    printf("%d\n", *a);
    printf("%d", *b);
}

void main()
{
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    swappingOfNumbers(&a, &b);
}
