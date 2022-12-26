#include<stdio.h>
void main(){
//write a c prog to demonstarate logical operator AND
        int a =22;
        int b =75;
        int c =85;

    printf("\n LOGICAL AND OUTPUT = %d",a<b&&c>b);
    printf("\n LOGICAL AND OUTPUT = %d",a&&c);
    printf("\n LOGICAL AND OUTPUT = %d",-9&&12);
    printf("\n LOGICAL AND OUTPUT = %d",a&&c);


    //Write a c prog to demo logial NOT
    printf("\n LOGICAL NOT OUTPUT = %d",!(a<b&&b<c));


    //write a c prog to demo logical OR
    printf("\n LOGICAL OR OUTPUT = %d",a>b||c>b);



}
