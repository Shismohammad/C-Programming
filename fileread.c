#include <stdio.h>
#include <string.h>


int main(void)
{
    FILE *fileptr;
    char filestring[1000];

    if (fileptr == NULL)
    {
        return 1;
    }
    
    fileptr = fopen("file.text","r");
    fscanf(fileptr,"%s",filestring);
    printf("%s",filestring);

    fclose(fileptr);

}