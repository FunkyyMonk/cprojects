/*Richard Phillips
2/6/2023
Assignment 4
Write a C program to evaluate relational and logical expressions and solve a problem described in English.*/

#include <stdio.h>

int main()
{
    //PART 1
    int a = 5, b = 4, c = 3, d = 2;

    if ( a <= b + 1 )
    {
          printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    if ( a < b && c > b )
    {
     printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    if ( a >= c || d >= 5 )
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    if ( !( a > b) )
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    if ( b >= a && !(d < b) )
    {
        printf("True\n");
    } 
    else
    {
        printf("False\n");
    }

// PART 2
int grade;
float avg, perc, total;
total = 0.0;

while (grade != -1)
{ 
    printf("\nEnter grade: ");
    scanf("%d", &grade);
    if (grade >= 0 && grade <= 100)
    {
        avg = (int)grade + avg; 
        total = total + 1;
        perc = (int)avg / total; 
    }
    else if (grade <70)
    {
        avg = 
    }
    else if (grade > 100)
    {
        printf("That is not a valid grade!");
        total = total - 1;
    }
}

printf("You entered %.0f passing grades.", total);
printf("\n\n%.1f of the valid grades entered are passing grades.", perc);
return 0;
}
