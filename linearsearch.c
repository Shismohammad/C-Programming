#include <stdio.h>

//Programm to search a number from array
int main (void)
{
    int numbers[] = {5,6,2,3,4,0,1,7};//array declaration
    
    for ( int i = 0; i < 7; i++)
    {
        if (numbers[i] == 3)
         {
            printf("Found that number");
            return 0; //Exit status and iff number found program will quit here not go to next line
         } 
    }
    printf("Not found that number");// catch all
    return 1; // Exit status 
}