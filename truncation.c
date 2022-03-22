#include <stdio.h>
// code to show truncation of two numbers
int main()
{   
    int a,b;
    // getting numbers from users
    printf("Enter number A : ");
    scanf("%i", &a);  
    printf("Enter number B : ");
    scanf("%i", &b); 

    float c=a/b; // truncation occurs, numbers after  dot . is ommited
    printf("\nAddition of A and B is: %f (Truncation occurs)\n",c);

    // with using type cast we can solve truncation
    float d=(float)a/(float)b;// convert a and b into float and then do math on them
    printf("Addition of A and B is: %f",(float)d);

    //printf("\n\nValue of A is : %f",(float)a);
}