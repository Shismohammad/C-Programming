#include <stdio.h>

// Code to print string and NULL character or End \0
int main (void)
{
    char *s = "Hello World !";

    int a,b;
    b = sizeof(a); // sizeof() function gives size of datatype
    printf("Size of interger : %i bytes\n\n",b);

    printf("%c \n", *s);
    printf("%c \n", *(s+1));
    printf("%c \n", *(s+2));
    printf("%c \n", *(s+3));
    printf("%c \n", *(s+4));

    printf("\nThe null value :%i \n", *(s+13) );// This line will print NUL value i.e 0. which indicates string end

    printf("\n%s",s);

}