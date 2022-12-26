#include <stdio.h>
// read age in years and gender of the person and display
// age 45 65 25%
// age 65 50%
//  5 25 10%
// 5 free
void main()
{
    int age;
    char gender;
    printf("Check your dicount,please enter data. \n");

    printf("Enter your Gender (m/f)\n");
    scanf("%c", &gender);

    printf("Enter your age in years \n");
    scanf("%d", &age);

    if (gender == 'm')
    {
        // printf("you are male");
        if (age >= 65)
        {
            printf("You can get 30 discount");
        }
        else
        {
            printf("You can get 10 discount");
        }
    }
    if (gender == 'f')
    {
        // printf("you are female");
        if (age >= 65)
        {
            printf("You can get 50 discount");
        }
        else
        {
            printf("You can get 25 discount");
        }
    }
    else{
        printf("worng input");
    }
    
}