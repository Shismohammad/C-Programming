#include <stdio.h>
#include <string.h>

// Code to get strings and compare it 
int main (void)
{   
    char s[50]; char t[50];

    printf("String 1 : ");
    fgets(s,49,stdin);// fgets is safe to use compared to scanf and gets function to get string from user

    printf("String 2 : ");
    fgets(t,49,stdin);

    printf("String 1 location : %p\n",&s);
    printf("String 2 location : %p\n",&t);

    if ( strcmp(s,t) == 0 ) // strcmp() will compare ascii value rather than address (s == t)
    {
        printf("Both are Same strings");
    }
    else
    {
        printf("Both are Different strings");
    }
}