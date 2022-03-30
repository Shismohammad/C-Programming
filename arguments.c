#include <stdio.h>

//Code to accept command line arguments .\arguments.exe yourname and print it
int main(int argc, char *argv[])
{
    if(argc == 2)// 2 because program name and yourname in command line arguments 
    {
        printf("Hello, %s ",argv[1]);//argv[1] is for yourname argv[0] will print programm name
    }
    else
    {
        printf("Default: Hello World !");//if no argument used
    }
}