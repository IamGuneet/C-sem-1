#include<stdio.h>

void addTill10(int n){
    int t = n;
    if (n == 10)
    {
        return;
    }else
    {
        printf("%d\n",t);
        t++;
        addTill10(t);
    }
    

}

void main(){
    int a =2;
    addTill10(a);

}