//using function write a programme to read a number and increment it by 10
#include<stdio.h>

void plusTen(int x){
    int r = x +10;
    printf("%d",r);
}

void main(){
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    plusTen(a);
}