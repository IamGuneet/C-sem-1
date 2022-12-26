    // write a c prog to read a character and verify its uppercase lower case numerical character arithmetic operator non printable char or special symbol
#include <stdio.h>
void main(){
    char a;
    // Range

    // aski value A-Z 65 90
    //  a-z 97 122
    //  0 -9 48 57
    // arithmetic 37,42,43,45,47
    //  non printable 0-31
    printf("Please enter a character\n");
    scanf("%c", &a);
    // converting char to askii int value
    int v = a;

    if (v >= 65 & v <= 90)
    {
        printf("Character is an Uppercase alpabhet\n");
    }
    else if (v >= 97 & v <= 122)
    {
        printf("Character is a Lowercase alpabhet\n");
    }
    else if (v >= 48 & v <= 57)
    {
        printf("Character is Number\n");
    }
    else if (v >= 0 & v <= 31)
    {
        printf("Character is a non printable key\n");
    }
    else if (v >= 37 & v <= 47)
    {
        printf("Character is an Arithmetic operator\n");
    }
    else {
    printf("Charcter out of bound");
    }
}
