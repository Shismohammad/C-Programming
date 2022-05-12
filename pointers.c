#include <stdio.h>

// code for printing string and location with using pointer
int main (void)
{   
    char *s = "HELLO!"; // here is *s is pointer variable of type char to declare string
    
    printf("String is : %s\n",s);
    printf("Address of first character : %p\n", &s[0]);
    printf("Address of second character : %p\n", &s[1]);

    //printing characters with pointer arithmatics
    printf("%c \n", *s); // here is *s means go to that address
    printf("%c \n", *(s+1)); // here (s+1) = s + (size of datatype)
    printf("%c \n", *(s+2));
    printf("%c \n", *(s+3));
    printf("%c \n", *(s+4));
    printf("%c \n", *(s+5));

    printf("The NUL character at last location in memory: %i", *(s+6));
}