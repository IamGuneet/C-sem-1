#include<stdio.h>
//c prog to implement binary search
int main()
{
    int i,lb,ub,x,mid,o;
    int arr[1000];
    printf("Enter no of inputs\n");
    scanf("%d",&i);
     lb = 0;
     ub = i-1 ; 
     o = 0;
    printf("Enter inputs \n");
    for (int j = 0; j < i; j++)
    {
        scanf("%d",&arr[j]);

    }

    printf("Enter the number you want to check for\n");    
    
    scanf("%d",&x);

    while (lb <= ub) 
    {
        mid = (ub+lb)/2;

        if (x == arr[mid])
        {
            o=1;
            printf("!!!!Found!!!!");
            break;
        }
        else if (x<arr[mid] ){
            ub = mid -1;
        }else{
            lb = mid+1;
        }
        

    }
    
    if (o==0)
    {
    printf("----Not found---");
    }
    



    return 0;
}