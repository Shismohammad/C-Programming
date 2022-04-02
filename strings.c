#include <stdio.h>
#include <string.h>

// Code to print string and NULL character or End \0
int main (void)
{
    char *s = "Hello World !";

    int a,b;
    //b = sizeof(a); // sizeof() function gives size of datatype
    //printf("Size of interger : %i bytes\n\n",b);
    printf("\nYour string is : %s\n\n",s);

    //printing string with pointers
    printf("%c \n", *s);
    printf("%c \n", *(s+1));
    printf("%c \n", *(s+2));
    printf("%c \n", *(s+3));
    printf("%c \n", *(s+4));

    printf("\nThe NUL character value at 14th location : %i \n", *(s+13) );// This line will print NUL value i.e 0. which indicates string end

    int c;
    c = strlen(s);
    printf("Total string length is %i",c);

}