#include <stdio.h>
float average(int length,int array[]);

//const int TOTAL = 5; //declaring constant

//Code to calculate average with using function array and const.
int main (void)
{   
    int TOTAL;
    printf("\nPlease Enter Total Subjects : ");
    scanf("%i",&TOTAL);
    int scores[TOTAL];
    printf("\n");

    for (int i = 0; i < TOTAL ; i++)//this loop will ask user to enter scores and stores in array
    {   
        printf("Enter your score here : ");
        scanf("%i",&scores[i]);// entered score will be stored in array "scores"
    }

    printf("\nYour average score is : %0.2f\n\n", average(TOTAL,scores));
}

// Function to calculate average
float average(int length,int array[])
{   
    //program to sum all scores
    int sum=0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return sum / (float) length;
}