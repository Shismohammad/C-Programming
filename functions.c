#include <stdio.h>
int my_function(void);

int main (void)
{
    int i ;
    i = my_function();//calling my_function . variable i get assiged the  return value of n. 
    printf("Here is your positive interger : %i !!!",i);
        
}


//my custom made fuction
int my_function(void)
{   
    int n;
    do
    {
        printf("Enter Positive Integer : ");
        scanf("%i", &n);
    } 
    while (n<1);
    return n;//return n ; will give value of n to programmer 

}