#include <stdio.h>

// code to print all prime numbers upto n number
int main(void)
{
    long long n;

    printf("Enter Max Number : ");
    scanf("%lld",&n);

    for (long long i = 0; i < n; i++)
    {   
        int m = 2;
        int flag = 1;

        if (i >= 2) // check for 0 and 1 Number which is neither prime nor composite
        {
            while (m < i) 
            {   
                if (i%m == 0) // divide i with value m to get remainder
                {
                    flag = 0; // set flag = 0
                    break; // break if loop
                }
                m++;
                
            }
            
            if (flag == 1)
            {
                printf("\t%lld",i); // if flag = 1 then number is prime number
            }
        }
    
    }
    
}