#include <stdio.h>
void swap (int *a,int *b);//prototyping

int main(void)
{
    int x , y;
    x=1;
    y=2;
    printf("X is %i, Y is %i \n\n",x,y);
    swap(&x,&y);//swap function calling
    printf("Now,\n\nX is %i, Y is %i \n",x,y);
    
}

void swap(int *a,int *b)//swaping function
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

}