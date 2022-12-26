// C prograamme to accept 3 subject marks and check if they are equal or not
#include <stdio.h>

void main()
{

    int a,b,c;
    printf("Math marks:\n");
    scanf("%d", &a);
    printf("Physics marks:\n");
    scanf("%d", &b);
    printf("English marks:\n");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("Math marks is greatest\n");
        if (b > c)
        {
            printf("Physics marks is 2nd highest\n");
          } if (b < c){
            printf("English marks is the least\n");
          }
        
    }
    if (b > a && b > c)
    {
        printf("Physics marks is greatest");
            if (a > c)
        {
            printf("Math marks is 2nd highest\n");
          } if (a<c){
            printf("English marks is the least\n");
          }
    }
    if (c > a && c > b)
    {
        printf("English marks is greatest");
            if (a > b)
        {
            printf("Math marks is 2nd highest\n");
          } if (a < b){
            printf("Physics marks is the least\n");
          }
    }
              


}