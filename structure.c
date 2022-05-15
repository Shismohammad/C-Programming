#include <stdio.h>
#include <string.h>

//phonebook using structure to keep related data togather
typedef struct
{   
    char *name; //name need to be string
    long long number; 
}
person; //structure name

int main (void)
{
      person people[2]; // declaring array of people variable of type person

      people[0].name = "brian" ;
      people[0].number = 8354153136;

      people[1].name = "david";
      people[1].number = 9341355524;

    for( int i=0 ; i<2 ; i++ )
    {
        if ( strcmp (people[i].name , "david") == 0) //compare name with required contact name
        {
            printf("david contact found !\nThe number is :%lli", people[i].number);
            return 0; //exit when found contact number
        }
    }
    printf("Not found");
    return 1; //exit status when not found any contact with name
}