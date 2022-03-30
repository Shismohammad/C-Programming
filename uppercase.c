#include <stdio.h>
#include <string.h>
#include <ctype.h>// instead of manual code use islower() function

//Code for converting lower case to upper case letters
int main (void)
{
    char *s= "Hello World !";
    printf("Your string is : %s\n",s);
    printf("Your upper case of string is : ");

    //loop will check lower case letters 
    for(int i=0,n = strlen(s) ; i<n ; i++ )
    {   
        //this will covert it to upper case
        if(s[i] >= 'a' && s[i]<= 'z')//it can be replaced by using if(islower(s[i])) condition
        {
            printf("%c",s[i]-32);//in ASCII character value minus - 32 is uppercase character or use toupper(s[i]) function
        }
        else
        {
            printf("%c",s[i]);
        }
    }
    printf("\n");
}