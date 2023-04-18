/*
Name: Richard Phillips
Programming Title: COP3223C
Assignment 10
3/23/2023
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char mystring[100];
    int size = 0;
    
    printf("Enter your string: ");
    scanf("\n%s", mystring);
    size = strlen(mystring);   

    for (int a = 0; a <= mystring[size]; a++)
    {
        printf("Forward: %s\n", mystring);
    }

    printf("Backwards: ");
    for(int b = size - 1; b >= 0; b--)
    {
        printf("%c", mystring[b]);
    }

    printf("\nVertical:\n");
    for (int c = size - 1; c >= 0; c--)
    {   
        printf("%c\n", mystring[c]);
    }

    printf("Triangle: ");
    for(int d = size; d >= 0; d--)
    {
        printf("%d", mystring[d]);
    }

    return 0;
}