#include <stdio.h>
void meow (int n); // Prototyping

//Code for abstraction and custom function
int main (void)
{   
    int a;
    printf("Enter how many time you want to print :");
    scanf("%i",&a);
    meow(a);//calling a function
}

//custom made function to avoid/hide complexity
void meow (int n) 
{
    for (int i = 0; i < n ; i++)
    {
        printf("Meow...........\n");
    }
    
}