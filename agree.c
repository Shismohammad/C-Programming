#include <stdio.h>

// code for license agree or not
int main()
{   
    char a;
    printf("Do You Agree ?\n");
    scanf("%c", &a);  

    //if else condition
    if (a == 'y' || a =='Y')
    {
        printf("\nYou Agreed to license :D");
    }
    
    else if (a == 'n' || a == 'N')
    {
        printf("\nYou NOT agreed to license :(");
    }

    else
    {
        printf("Please enter correct option :/");
    }
}