#include <stdio.h>
int countodd(int array[],int n);

// code to calculate odd numbers in array with using function
int main (void)
{
    int array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    printf("Total Odd numbers in array : %d", countodd(array,15));

}

int countodd(int array[],int n) // passing array and size of array to function
{
    int count = 0;

    for(int i=0 ; i<n ; i++)
    {
        if (array[i]%2 != 0) // odd number check
        {
            count++;
        }
        
    }
    return count;
}