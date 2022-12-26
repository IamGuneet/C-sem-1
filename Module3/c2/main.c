// write a function that returns factorial of  number;
#include<stdio.h>

// type 3
void factorialType3(int n){
int i;
int r=1;
for (i=1;i<=n;i++){
    r=r*i;

}    
printf("%d",r);
}

// type 4
int factorialType4(int n){
int i;
int r=1;
for (i=1;i<=n;i++){
    r=r*i;

}    
return r;
}


void main(){
int a;
printf("Enter a number\n");
scanf("%d",&a);

factorialType3  (a);    

}