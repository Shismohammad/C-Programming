#include <stdio.h>
long long fact (long long n);

// code for calculating factorial of a number
int main (void)
{   long long n;
    printf("Enter a number : ");
    scanf("%lld",&n);
    printf("Factorial of number %lld is : %lld",n,fact(n));
}

long long fact (long long n)
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