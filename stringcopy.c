#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // to use toupper function

// code to copy string and then capitalize first character
int main (void)
{
    char *s = malloc(50);// Dynamic memory allocation which allocate 50 bytes
    char *t;
    
    printf("Enter string S : ");
    fgets(s,50,stdin); // fgets is safe to use

    t = malloc(strlen(s)+1); // Dynamic memory allocation

    if ( t == NULL ) // check t has got valid address
    {
        return 1;
    }
    
    strcpy(t,s); // t is destination s is source

    if(s>0)
    {
        t[0] = toupper(t[0]);
    }

    printf("String s : %s",s);
    printf("String T : %s",t);

    free(s);
    free(t);
}