// malloc
#include <stdio.h>
#include <stdlib.h>

int main()
{

    // malloc
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d",ptr[i]);
    }
    


    return 0;
}
