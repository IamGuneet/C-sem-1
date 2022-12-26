//    c programme to demonstrate recursion
#include <stdio.h>

static int i;

void main()

{
    if (i == 5)
    {
        return;
    } else{
    i++;
    printf("Recurssion\n");
    main();
    }
    
}