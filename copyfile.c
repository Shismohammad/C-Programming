#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef uint8_t BYTE;
// code to copy files // not working
int main(int argc, char *argv[])
{
    if (argc != 3)
    {   
        fprintf(stderr,"Incomplete arguments");
        return 1;
    }

    FILE *source;
    source = fopen(argv[1],"r");
    
    if(source == NULL)
    {   
        printf("could not open %s file", argv[1]);
        return 1;
    }

    FILE *destination;
    destination = fopen(argv[2],"w");
    
    if (destination == NULL)
    {   
        fclose(source);
        printf("could not write to %s file", argv[2]);
        return 1;
    }

    BYTE buffer;
    while (fread(&buffer,sizeof(BYTE),1,source))
    {
        fwrite(&buffer,sizeof(BYTE),1,destination);
    }

    fclose(source);
    fclose(destination);
    return 0;
}