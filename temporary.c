#include <stdio.h>

//For temporary test code
int main(void)
{   
    printf("***For temporary test code***\n");
    
<<<<<<< HEAD
    char str[6] = "Hello";// string using array of characters
    str[0] = 'F';// (Mutable) changed H to F

    printf("You changed string : %s\n", str);
    printf("NUL character : %i", str[5]);// print NUL \0 character

    return 0;

    //b = sizeof(a); // sizeof() function gives size of datatype
    //printf("Size of interger : %i bytes\n\n",b);
=======
    // program for string
    char str[6] = "hello";

    //printf("Enter a string : ");
    //gets(str);
    //print given string
    str[4]='l';
    printf("You entered string: %s\n", str);
    printf("NUL : %i", str[5]);
} 

>>>>>>> 1a880a8f70d53be9b0f49b4bf6435a6a27310efd
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