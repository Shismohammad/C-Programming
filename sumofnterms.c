#include <stdio.h>
int sum(int n);


int main(void)
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Sum of numbers 1 to %d  is : %d",n,sum(n));
}

int sum(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n+sum(n-1);
    }
    
}