#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list= malloc(3*sizeof(int));//initializig pointer variable list and allocate 3byte multiplied by size of int (which is 1 )

    if(list==NULL) //check end of memory or problem with memory
    { 
        return 1;
    }


    list[0]=1;//any memory space allocated by malloc is also considerd as array because of back to back allocation
    list[1]=2;
    list[2]=3;
    
    int *temp = malloc(4*sizeof(int));//initializig pointer variable temp allocate 3byte multiplied by size of int (which is 1 )
    //also we can use realloc(__,__) function
    if (temp==NULL) //check end of memory or problem with memory
    {
        return 1;
    }

    for (int i=0; i<4; i++)
    {
        temp[i]=list[i];//adding value of list varible to temp variable
    }
    
    temp[3]=4;
 
    free(list);

    list = temp ;

    free(temp); 

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n",list[i]);
    }
    
}