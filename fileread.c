#include <stdio.h>
#include <string.h>

// code to read from file
int main(void)
{
    FILE *fileptr;
    fileptr = fopen("file.text","r");
    char filestring[100];

    if (fileptr == NULL) // If file is not found it return 1.
    {
        return 1;
    }
    
    fscanf(fileptr,"%s",filestring);
    printf("%s",filestring);

    fclose(fileptr);
}