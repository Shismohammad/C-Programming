#include <stdio.h>

int main (void)
{
    char s[6] = "HELLO!";

    printf("%p \n", &s[0]);
    printf("%p \n", &s[1]);
    printf("here is null/zero character %i",s[6]);
}