#include <stdio.h>

int main()
{
    int user;
    int pin = 5632;
    printf("----------------------------------\n");
    printf("Welcome To Guneet's Monetary Fund \n");
    printf("----------------------------------\n");
    printf("Enter your Pin ( Max 3 tries)\n");
    printf("\n");

    for (int i = 3; i >0; i--)
    {
    printf("---------------------\n");
    printf("%d tries left\n",i);
    printf("Enter your Pin: ");
        scanf("%d", &user);        

        if (user == pin)
        {
            printf("!!!!!Correct input!!!!\n");
            return 0;
        }
        if (i == 1)
        {
            printf("-----TRY AGAIN LATER-----\n");
            
            return 0;
        }
        else
        {
            printf("### wrong input ###\n");
            continue;
        }
    }

    scanf("%d", &user);

    return 0;
}