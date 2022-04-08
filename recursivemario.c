//not working
#include <stdio.h>
void draw(int h);

int main(void)
{
    int height;
    scanf("Enter height: %i",&height);
    draw(height);//calling function
}

void draw(int h)// custom function
{   
    if ( h == 0 ) // Base case senario
    {
        return;
    }

    draw( h-1 );
    for ( int i=0 ; i<h ; i++ )
    {
        printf("#");
    }
    printf("\n");

}