#include <stdio.h>
#include <stdlib.h> //must include for free() function

int main (void)
{   
    int x;
    printf("X: ");
    scanf("%i", &x);
    printf("Here is X: %i\n\n",x);


    char *s = malloc(10); // char s[10]; //or this used as array without free() function
    printf("Type here : ");
    scanf("%s", s);// s is fundamentally address thus &s not used
    printf("Your String : %s \n", s);
    free(s);

}