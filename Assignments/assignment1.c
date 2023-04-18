/*Richard Phillips
Create a C program to print out information
1/16/2023
Assignment 1*/

#include <stdio.h>

int main()
{
    float revenue;
    float cost;
    float profit;

    printf("Enter total revenue: ");
    scanf("%f", &revenue);

    printf("\nEnter total cost: ");
    scanf("%f", &cost);

    printf("\nYour profit is $");
    printf("%.2f", revenue - cost);

    return 0;
}
