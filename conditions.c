#include <stdio.h>

//Code for comparision using if else condition
int main()
{   
    int a,b;

    //getting numbers from user
    printf("Enter number A : ");
    scanf("%i", &a); 
    printf("Enter number B : ");
    scanf("%i", &b); 

    //compare a and b
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