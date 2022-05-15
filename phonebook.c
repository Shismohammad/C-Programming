#include <stdio.h>
#include <string.h>

// code to make contact file using FILE functions
int main (void)
{
    FILE *file; // create file pointer with type FILE
    file = fopen("phonebook.csv","a"); // open file in file pointer 

    if (file == NULL) // or if (!file) // If file is not found it return 1.
    {
        return   1;
    }
    
    char name[100];
    printf("Enter Your name : ");
    fgets(name,100,stdin);

    char number[100]; 
    printf("Enter Your Number : ");
    fgets(number,100,stdin);

    fprintf(file,"\nName: %sNumber: %s",name,number); // print to phonebook.csv file
    fclose(file);

}