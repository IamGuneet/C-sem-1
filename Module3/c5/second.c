// scope of local and global
#include<stdio.h>
int x =10;

void funcx(){

printf("%d",x);
}

void main(){
     int x =20;
    printf("%d\n",x);
    
    {
        int x =30;
    printf("%d\n",x);
    }
    funcx();

}