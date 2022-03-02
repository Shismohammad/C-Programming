#include <stdio.h>

int main()

{   int a,b;

    printf("Enter number A : ");
    scanf("%i", &a); 
    printf("Enter number B : ");
    scanf("%i", &b); 

    float c=(float)a/(float)b;
    printf("Addition of A and B is: %f",(float)c);

    printf("\n\nValue of A is : %f",(float)a);
}