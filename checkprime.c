#include <stdio.h> 

// code to find a perticular number is prime or not
int main(void)
{    
    long long n,i;
    long long m=2,flag=1;  

    printf("Enter the number to check prime : ");    
    scanf("%lld",&n);    

    m=n/2;    

    if (n >= 2) // check for 0 and 1 Number which is neither prime nor composite
    {   
        for(i = 2 ; i <= m ; i++)    
        {    
            if(n%i == 0)    
            {    
                printf("Given Number is Composite Number");    
                flag = 0;    
                break;    
            }    
        }    
        
        if(flag == 1) // if flag = 1 then number is prime number
        {
            printf("Number is Prime");      
        }
        return 0;  
    }

    else
    {
        printf("Number neither prime nor composite !");
        return 1;
    }
} 