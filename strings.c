#include <stdio.h>
#include <string.h>

// Code to print string and NULL character or End \0
int main (void)
{
    char *s = "Hello World !"; // here is *s is pointer variable of type char to declare string constant/immutable
    typedef char *string; // create additional name/synonym string to char * using typedef
    string text;
    int length;
    length = strlen(s); //store string length in l variable <<<<<

    printf("\nYour string is : %s\n",s);
    printf("The NUL character at last location : %i\n\n", *(s+13)); // This will print NUL value i.e \0. which indicates string end
   
    printf("Enter string : ");
    scanf("%s",text); // get string from user and store it in text variable
    printf("Here is your entered string : %s\n",text); // print out entered string

    printf("Total string length is %i\n\n",length); // print total s string length

}