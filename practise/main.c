#include<stdio.h>


int primeCheck(int n){
    int result=0;
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            result++;
        }
        
    }
    if (result == 0)
    {
        return 1;
    }
    
    

}

void printPrime(int a,int b){

    for(int i=a;i<b;i++){
        if (primeCheck(i) == 1)
        {
            printf("%d\n",i);
        }
        
    }
}

void main(){
    int l,u;
    scanf("%d",&l);
    scanf("%d",&u);
    printPrime(l,u);
}