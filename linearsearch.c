#include <stdio.h>

int main (void)
{
    int numbers[] = {5,6,2,3,4,0,1,7};
    
    for ( int i = 0; i < 7; i++)
    {
        if (numbers[i] == 8)
         {
            printf("Found that number");
            return 0;
         }
         
    }
    printf("Not found that number");
    return 1;
    
}