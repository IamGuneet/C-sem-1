//write a c prog accessing content of a variable name using var name and pointer name .
// write a c prog to demonstrate pointers concept in c lang
// write a c prog to add 2 numbers using pointers
#include<stdio.h>
void main(){

    int a = 69;
    int b = 69;

    int *ia = &a;
    int *ib = &b;
    
    int sum = *ia + *ib;

    printf("The sum is %d",sum);
    // char b;
    // char *ib =&b;
    // printf("%d\n",&b);
    // printf("%d\n",ib);
}