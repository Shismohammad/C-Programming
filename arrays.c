#include <stdio.h>
#include <string.h>

//Code to get and print scores using array.
int main (void)
{      
    int score[5];// Declaring array of size 5

    printf("Enter 5 subjects scores\n\n");

    for(int i = 0 ; i < 5 ; i++) // for loop to store scores at score[5] array
    {
        printf("Enter your scores : ");
        scanf("%i",&score[i]);
    }
    
    printf("\nScore of subject 1 is : %i\n",score[0]); // print scores at score[5] array

}