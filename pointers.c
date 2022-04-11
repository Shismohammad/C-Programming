#include <stdio.h>

// code for printing string location with using pointer
int main (void)
{
    char *s = "HELLO!"; //char * is similar to string

    printf("%p \n", s[0]);
    printf("%p \n", s[1]);
    printf("here is null/zero character %i",s[6]);
}