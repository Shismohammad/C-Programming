#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
    FILE *file;
    file = fopen("phonebook.csv","a");  

    if (file == NULL)// or if (!file) // If file is not found it return 1.
    {
        return   1;
    }
    
    char name[100]; //char *name = malloc(100);
    printf("Enter Your name : ");
    scanf("%s",name); // Bug : after space bar string gets considerd for second input

    char number[100]; //char *number = malloc(100);
    printf("Enter Your Number : ");
    scanf("%s",number);

    fprintf(file,"Name: %s \nNumber: %s\n\n",name,number); 
    fclose(file);

    //free(name);
    //free(number);
     
}