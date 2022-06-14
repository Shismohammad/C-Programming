#include <stdio.h>
#include <string.h>

// code to keep related data togather using structure
struct student 
{   
    char name[100];
    int rollnumber;
    float cgpa;
};

void myfunction(struct student s10);

int main(void)
{
    struct student s1; // declaring s1 variable of type struct student

    s1.rollnumber = 50;
    s1.cgpa = 8.8;
    //s1.name = "david" ; // wrong because string declared with array notation cannot change string array instead use pointer
    strcpy(s1.name,"david"); // but can copy to string to 

    printf("Student : %s\n",s1.name);
    myfunction(s1);

}

void myfunction(struct student s1) // passing structure to function
{
    printf("Student CGPA : %f",s1.cgpa);
}