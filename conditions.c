#include <stdio.h>

int main()

{   int a,b,c;

    printf("Enter number A : ");
    scanf("%i", &a); 

    printf("Enter number B : ");
    scanf("%i", &b); 

    if (b<a)
    {
        printf("\nNumber A is greater than B");
    }
    else if (a<b)
    {
        printf("\nNumber B is greater than A");
    }
    else
    printf("\nBoth Numbers are equal !!");
    
}