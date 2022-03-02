#include <stdio.h>

int main (void)
{
    char *s = "Hello World !";

    int a,b;
    b= sizeof(a);
    printf("Size of interger :%i bytes\n",b);//sizeof() gives size of datatype

    printf("%c \n", *s);
    printf("%c \n", *(s+1));
    printf("%c \n", *(s+2));
    printf("%c \n", *(s+3));
    printf("%c \n", *(s+4));

    printf("\nThe null value :%i \n", *(s+13) );//This line will print nul value i.e 0. which indicates string end

    printf("\n%s",s);
 
}

