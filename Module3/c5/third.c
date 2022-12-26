// c programme to demonstrate malloc function
// dynamic memory allocation - malloc
#include <stdio.h>
#include <stdlib.h>

void main()
{

    int *sp, *ip;
    sp =    (int *)malloc(16);
    int i;
    ip = sp;

    for ( i = 1; i <= 4; i++)
    {
        *sp = i*100;
        sp=sp+1;
    }
    for ( i = 1; i <= 4; i++)
    {
        printf("%d\n",*ip);
        ip=ip+1;
    }
    


}