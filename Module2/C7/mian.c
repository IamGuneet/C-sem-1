// c programme to demonstrate all arithmetic operations using pointer variable,
// accept data from user
// write a c prog to demonstrate all artimetic operation using double pointers
#include<stdio.h>
void main()
{
int a,b,total;

int *pa;
int *pb;
int *pTotal;
int **dp;

printf("Enter input\n");

pTotal =&total;
pa = &a;
pb = &b;

scanf("%d",pa);
scanf("%d",pb);

dp = &pTotal;
*pTotal= *pa + *pb ;

//           -
//           /  
//           *  

printf("The total is %d",*pTotal);


}