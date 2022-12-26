//    c programme to display first n natural numbers using loop statements , recursion
#include <stdio.h>

static int a=1;

void main()
{
//loop

// int i ;
// for ( i = 1; i < 11; i++)
// {
//     printf("%d \n",i);

// }
    if (a<11)
    {
        printf("%d\n",a);
        a++;
        main(a);
    }
    

    
}