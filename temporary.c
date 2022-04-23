#include <stdio.h>

//For temporary test code
int main(void)
{   
    printf("***For temporary test code***\n");
    
    char str[6] = "Hello";// string using array of characters
    // str = "Hello"; is not allowed
    str[0] = 'F';// (Mutable) changed H to F

    printf("You changed string : %s\n", str);
    printf("NUL character : %i", str[5]);// print NUL \0 character

    return 0;

    //b = sizeof(a); // sizeof() function gives size of datatype
    //printf("Size of interger : %i bytes\n\n",b);
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
    printf("\nSize of character in bytes : %d", sizeof(c));  **/
}