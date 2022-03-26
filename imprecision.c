#include <stdio.h>

//Code to demonstration of imprecision in output due to 4 byte (32-bit) float datatype
void main()
{  
    float x,y,z;// float maxmum size 4 byte (32-bit)
    x = 1; y = 10;

    printf("X value: %f\n",x);
    printf("Y Value: %f\n",y);
    
    z=x/y;

    printf("Output of Division Z = %0.50f (Imprecision)",z);//0.50 is for numbers after decimal point
}   