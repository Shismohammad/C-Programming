#include <stdio.h>
#include <string.h>
void salting(char password[]);

// code for salting in password with using standard string.h functions
int main (void)
{   
    char password[100];
    printf("Enter your password : ");
    scanf("%s",password);
    salting(password);
}

void salting(char password[]) // passing char array to salting function
{
    char salt[10] = "123"; // new string used for salting
    char newpass[200];
    strcpy(newpass,password);
    strcat(newpass,salt); // salting
    printf("Salted password : %s",newpass);
}