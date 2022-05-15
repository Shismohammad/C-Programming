#include <stdio.h>
#include <string.h>

// code to write in file
int main(void)
{
    FILE *fileptr;
    char string[100] = "hello world";

    if (fileptr == NULL)
    {
        return 1;
    }
    
    fileptr = fopen("file.text","w");

    fprintf(fileptr,"%s",string);
    printf("Write success");
    fclose(fileptr);
}