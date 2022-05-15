#include <stdio.h>
#include <string.h>

// code to write in file
int main(void)
{
    FILE *fileptr;
    fileptr = fopen("file.text","a");
    char string[100] = "hello world";

    if (fileptr == NULL) // If file is not found it return 1.
    {
        return 1;
    }

    fprintf(fileptr,"%s\n",string);
    printf("Write success");
    fclose(fileptr);
}