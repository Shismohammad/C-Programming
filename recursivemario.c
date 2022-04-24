#include <stdio.h>
void draw(int h);

//Code to print mario pyramid structure using recursion
int main(void)
{
    int height;
    printf("Enter height: ");
    scanf("%i",&height);
    draw(height);//calling draw function
}

void draw(int h) // custom function
{   
    if (h == 0) // Base case
    {
        return;
    }

    draw(h-1);

    for ( int i=0 ; i < h ; i++ )
    {
        printf("#");
    }
    printf("\n");

}