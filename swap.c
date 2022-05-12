#include <stdio.h>
void swap (int *a,int *b); // prototyping

// code to swap to numbers using call by reference
int main(void)
{
    int x , y;
    x = 1;
    y = 2;
    printf("X is %i, Y is %i \n\n",x,y);
    swap(&x,&y); // call by reference where address of variable is passed
    printf("Now after swap,\n\nX is %i, Y is %i \n",x,y);

}

void swap(int *a,int *b) // get address of x and y then stores in 2 pointers
{
    int temp; // temporary variable

    temp = *a;
    *a = *b;
    *b = temp;

}