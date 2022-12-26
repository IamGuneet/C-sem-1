// sum of n ntural numbers using recursions
#include<stdio.h>

int sum(int n){
    int x;
    for (int i = 0; i <= n; i++)
    {
    x=x+i;
    }
    printf("%d",x) ;       
}

 void main(){
    int a=10;
    sum(a);
 }
 

