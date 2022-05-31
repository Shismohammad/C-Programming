#include <stdio.h>
void reverse(int array[],int n);
void printarray(int array[], int n);

//code to print reversed array
int main(void)
{
    int array[] = {1,2,3,4,5,6,7,8,9,10};

    printf("Array before : [");
    for(int i = 0; i < 10; i++)
    {
        printf("\t%d",array[i]);
    }
    printf("\t]\n");

    reverse(array,10);
    printarray(array,10);

}

void reverse(int array[],int n) // passing array and size of array to function
{
    for(int i=0; i<n/2;i++)
    {
        int first = array[i];
        int last = array[n-1-i]; // array[n-1] is formula for access last element of array
        array[i] = last;
        array[n-i-1] = first;
    }
}

void printarray(int array[], int n) // passing array and size of array to function
{   
    printf("Reversed array : [");
    for (int i = 0; i < n; i++)
    {
        printf("\t%d",array[i]);
    }
    printf("\t]");
}