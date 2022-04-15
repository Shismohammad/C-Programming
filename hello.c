#include <stdio.h>

// hello program 
int main (void)
{   
    char name[20];

    printf("Enter Your Name : ");
    gets(name);// scanf ommit string after white space
    printf("Hello, %s !",name);
    
}