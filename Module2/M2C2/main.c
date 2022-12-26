// C prograamme to accept 2 int and check if they are equal or not
#include <stdio.h>

void main()
{

    int a;
    printf("Enter your age:\n");
    scanf("%d", &a);
    if (a >= 18)
    {
        printf(" You are  Eligble for Covid Vaccination !!");
    }
     else{
        printf(" You are not Eligble .");
     }
}