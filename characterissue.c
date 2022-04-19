#include <stdio.h>

// code to get character from user and  
int main(void)
{
    int a;
    char char1, char2;

    //printf("Enter integer: ");
    //scanf("%d",&a); // every scanf() leaves a newline character in a buffer that is read by next scanf()

    printf("Enter a char: "); 
    scanf("%c",&char1); 
    printf("Enter another char: ");
    scanf(" %c",&char2); // skipping problem solved by leading whitespace before %c
    
}