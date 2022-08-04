#include <stdio.h>

// code to store student info using structure array and pointer
struct student 
{   
    char *name;
    int roll;
    float cgpa;
};

int main(void)
{
    struct student ece[100];
    struct student cse[100];

    struct student s1 = {"aman" , 35 , 7.5}; // initializing structure anather way
    struct student *ptr = &s1; // pointer to structure


    ece[0].name = "david";
    ece[0].roll = 52 ;
    ece[0].cgpa = 8 ;

    cse[0].name = "brian";
    cse[0].roll = 63;
    cse[0].cgpa = 9;

    printf("Student info : %s\n", ece[0].name);
    printf("Student info : %s\n", s1.name);
    printf("Student info : %s\n", (*ptr).name); // printing using pointer
    printf("Student info : %s\n", ptr->
    name); // printing using arrow pointer operator

}