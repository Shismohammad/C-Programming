#include <stdio.h>
// code for adddition of two numbers using int and long
int main()
{   //addintion of two 4000000000 (4 billion) needs long long int
    long long a,b,c;// long long interger data type 64-bit in size

    //getting numbers from user
    printf("Enter number A : "); 
    scanf("%lli",&a); 
    printf("Enter number B : ");
    scanf("%lli",&b);
    
    // addition
    c = a + b;
    printf("\nAddition of A and B is: %lli",c);

}