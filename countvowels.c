#include <stdio.h>
#include <string.h>
int countvowels(char string[]);

// code to count vowels in string
int main(void)
{
    char string[100] = "hello world";
    printf("STRING : %s\n", string);
    printf("Total vowels : %d", countvowels(string));
}

int countvowels(char string[])
{
    int count = 0;
    for(int i=0 ; string[i] != '\0'; i++ )
    {   
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i'|| string[i] == 'o'|| string[i] == 'u' )
        {
            count++;
        }
    }
    return count;
}