#include <stdio.h>

int main(void)
{   
    int n = 50;
    
    int *p = &n ;// p is pointer variable

    printf("%i \n", *p);//Prints Value of variable n

    printf("%p \n", p);//Prints memory location of variable n

    printf("%p \n", &p);//Prints memory location of pointer variable p
 
}