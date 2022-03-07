#include <stdio.h>

int main()
{  // program for string
   char str[5];

   printf("Enter a string : ");
   gets(str);

   printf("You entered: %s", str);

   return 0;

    /**int a,b;
    a=1;
    b=20;
    char c;

    do
    {
        printf("Hello World !\n");
        a++;
    }
    while (a<=10);
    printf("Size of interger in bytes : %d",sizeof(b-a)+sizeof(a-b));
    printf("\nSize of character in bytes : %d", sizeof(c));**/

}