#include <stdio.h>
#include <string.h>

// NOT WORKING  
int main (void)
{
    char *s; char *t;
    printf("S:");
    fgets(s,20,stdin);
    printf("T:");
    gets(t);

    if (s == t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}