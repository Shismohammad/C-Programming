#include <stdio.h>
#include <stdlib.h>

// code to resize list using malloc and realloc.
int main(void)
{
    int *list; //initializig pointer variable named list
    list = malloc(3*sizeof(int)); // allocate 3 byte multiplied by size of int

    if(list == NULL) //check any problem with memory
    { 
        return 1;
    }

    list[0]=1; //any memory space allocated by malloc is treated as array.
    list[1]=2;
    list[2]=3;
    
    int *temp; //initializig pointer variable named temp
    temp = realloc(list,4*sizeof(int));

    if (temp == NULL) //check end of memory or problem with memory
    {   
        free(list);
        return 1;
    }
    
    temp[3] = 4;
    free(list);
    list = temp; 
    
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n",list[i]);
    }

    free(list);    
}