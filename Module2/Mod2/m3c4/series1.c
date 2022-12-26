// 11111 22222 33333 44444 55555
// analize the following c prog code and how the values of control variable are changing depict .

#include<stdio.h>
void main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j <5; j++)
        {
            printf("%d",i);
        }
        printf("\t");
    }
    return;
}