#include <stdio.h>
unsigned long long fibonacci(int n);

// code for calculating fibonacci of nth term using recursion
int main(void)
{
    int n; 
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Fibonacci of %dth term is : %llu",n,fibonacci(n));
}

unsigned long long fibonacci(int n) // int datatype is insufficient to store large number
{
    if (n==0) // base case
    {
        return 0;
    }
    if (n==1) // base case
    {
        return 1;
    }
    
    else // formula for nth term fibonacci is f(n)= f(n-1)+f(n-2)
    {  
        unsigned long long fib = fibonacci(n-1)+fibonacci(n-2);
        return fib;
    }
}