#include <stdio.h>

// code to store students information in text file
int main (void)
{
    FILE *fileptr;
    fileptr = fopen("studentsdata.csv","a");

    if (fileptr == NULL) // If file is not found it return 1.
    {
        return 1;
    }

    char name[100];
    int roll;
    float cgpa;

    printf("Enter student name : ");
    fgets(name,100,stdin);
    printf("Enter student roll number : ");
    scanf("%d",&roll);
    printf("Enter student CGPA : ");
    scanf("%f",&cgpa);

    //fprintf(fileptr,":: Students Information :: \n\n");

    fprintf(fileptr,"Student name : %s",name);
    fprintf(fileptr,"Student Roll No. : %d\n",roll);
    fprintf(fileptr,"Student CGPA : %f\n\n",cgpa);

    fclose(fileptr);
}