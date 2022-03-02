#include <stdio.h>

int main()

{   char a;

    printf("Do You Agree ?");
    scanf("%c", &a);  

    if (a == 'y' || a =='Y')
    {
        printf("\nYou Agreed to license...!!!");
    }
    else
    printf("\nYou NOT Agreed to license :/ :/....");

}