#include <stdio.h>
unsigned long long fact (int n);

// code for calculating factorial of a number using recursion
int main (void)
{   int n; 
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Factorial of number %d is : %llu",n,fact(n));
}

unsigned long long fact (int n) // int datatype is insufficient to store large number
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}