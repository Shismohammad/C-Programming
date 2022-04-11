#include <stdio.h>

//For temporary test code
int main(void)
{   
    printf("For temporary test code\n");
    
    // program for string
    char str[6] = "hello";

    //printf("Enter a string : ");
    //gets(str);
    //print given string
    str[4]='l';
    printf("You entered string: %s\n", str);
    printf("NUL : %i", str[5]);
} 

    //Size of data type
    /**
    int a,b;
    a=1;
    b=20;
    char c;

    do
    {
        printf("Hello World !\n");
        a++;
    }
    while (a<=10);
    printf("Size of interger in bytes : %d",sizeof(b-a)+sizeof(a-b));
    printf("\nSize of character in bytes : %d", sizeof(c));
} **/