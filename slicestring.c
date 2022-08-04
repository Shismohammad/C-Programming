#include <stdio.h>
#include <string.h>
void slice(char string[], int n , int m);

// code to slice string from given n to m string
int main (void)
{
    char string[100] = "helloworld";
    printf("String : %s\n",string);
    slice(string,3,8);
}

void slice(char string[], int n , int m)
{
    char newstring[100];
    int j = 0;

    for(int i = n; i<=m ; i++ ) // loop from n to m in string
    {
        newstring[j] = string[i]; //copy character by character in new string
        j++;
    }

    newstring[j] = '\0'; // storing NUL character at newstring end
    printf("Sliced string : %s",newstring);
}