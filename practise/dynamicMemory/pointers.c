#include<stdio.h>

void main()
{
    int a = 44;
    int* ptra = &a;
    printf("%d\t",ptra);
    printf("%d",ptra+1);

}