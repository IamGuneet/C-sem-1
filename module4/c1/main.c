#include <stdio.h>
int main()
{ 
     //   write a c prog to display content of an array using pointers
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *a = &arr[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%d \t", *(a + i));
    }
    return 0;
}