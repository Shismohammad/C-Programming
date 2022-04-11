#include <stdio.h>

// program to see address of variable in hexadecimal and decimal
int main(void)
{   
    int n = 50;
    int *p = &n ;// p is pointer variable

    printf("Value of variable n : %i \n", *p);// *p say go to that address which stored in pointer p
    printf("Address of variable n in hexadecimal format : %p \n", &n);//Prints memory location of pointer variable n
    printf("Address of variable n with hex to decimal converted : %i \n", &n);// convert hexadecimal address to decimal

}