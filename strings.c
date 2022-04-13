#include <stdio.h>
#include <string.h>

// Code to get string from user , print string and print NUL character (\0)
int main (void)
{
    char *s = "Hello World !"; // here is *s is pointer variable of type char to declare string constant/immutable
    typedef char *string; // create additional name/synonym string to char * using typedef
    string text;
    int length;
    length = strlen(text); //store string length in variable <<<<<

    printf("\nYour string is : %s\n",s);
    printf("The NUL character at last location in memory : %i\n\n", *(s+13)); // This will print NUL value i.e \0. which indicates string end
   
    printf("Enter string : ");
    scanf("%s",text); // get string from user and store it in text variable
    printf("Here is your entered string : %s\n",text); // print out entered string
    printf("Total string length is : %i\n\n",strlen(text)); // print total s string length

}