#include <stdio.h>
#include <string.h>

// NOT WORKING  
int main (void)
{
    char *s; char *t;
    printf("S:");
    scanf("%s",s);
    printf("T:");
    scanf("%s",t);

    if (s == t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}