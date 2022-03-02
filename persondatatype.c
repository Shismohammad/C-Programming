#include <stdio.h>
#include <string.h>

//not compiling it need to be string// updated runing not verified.

typedef struct
{   
    char *name;
    char *number;
}
person;

int main (void)
{
      person people[2];

      people[0].name = "brian" ;
      people[0].number = "8354153136";

      people[1].name = "david";
      people[1].number = "9341355524";

    for(int i=0; i<2; i++)
    {
        if (strcmp(people[i].name , "david") == 0)
        {
            printf("contact found ! number is :%i", people[i].number);
            return 0;
        }
    }
    printf("Not found");
    return 1;

}