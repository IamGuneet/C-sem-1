//  factorial using recursion
#include<stdio.h>
  static int result=1;

int fact(int n ){

    if(n==1){

        return result;
    } else
    {
        result = result*n;
        fact(n-1);
    }
    
}

void main(){

int a =5;
int b = fact(a);
printf("%d",b);
}

