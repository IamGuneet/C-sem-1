// HCF
#include<stdio.h>

int hcF(int smaller,int bigger){
   
    int a ,b;
    a = bigger%smaller;
    b= bigger/smaller;
    if (a == 0)
    {
        return smaller;
    } else{
        hcF((bigger -(smaller*b)),smaller);
    }
}



void main(){

int a[10] = {1,2,3,4,5,6,7,8,9,10}, i = 6 ;
int *p = &a[0];
printf("%d\n", *(p + i));

}
