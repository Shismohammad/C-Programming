#include <stdio.h>

//Code for comparision using if else condition
int main()
{   
    int a,b;

    //getting numbers from user
    printf("Enter number A : ");
    scanf("%i", &a); 
    printf("Enter number B : ");
    scanf("%i", &b); 

    //compare a and b
    if ( b < a )
    {
        printf("Number A is greater than B\n");
    }
    else if ( a < b )
    {
        printf("Number B is greater than A\n");
    }
    else
    printf("Both Numbers are equal !!\n");
    

    int day;
    printf("\nEnter a day : ");
    scanf("%d",&day);

    switch (day)
    {
    case 1 :
        printf("Monday");
        break;
    case 2 :
        printf("Tuesday");
        break;
    case 3 :
        printf("wednesday");
        break;
    case 4 :
        printf("Thursday");
        break;
    case 5 :
        printf("Friday");
        break;
    case 6 :
        printf("Saturday");
        break;
    case 7 :
        printf("Sunday");
        break;

    default:
        printf("Invalid input");
        break;
    }

}