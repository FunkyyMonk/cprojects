/* Richard Phillips
2/19/2023
Lab 6-1 
Write a program that uses two functions to convert from Celsius to Fahrenheit and vice versa.
*/

#include <stdio.h>

int menuAnswer, tempInput; 
//Functions that stores the menu to be called
void menu()
{
    printf("1. Convert temperature input from the user in degrees Fahrenheit to degrees Celsius.\n");
    printf("2. Convert temperature input from the user in degrees Celsius to degrees Fahrenheit.\n");
    printf("3. Quit.\n\n");
}
//Converts farenheit to celsius
int farentocels(int f)
{
    
    int celsius = 5 * (f - 32) / 9;

    return celsius;
}
//Converts celsius to farenheit 
int celstofaren(int c)
{   
    
    int farenheit = 9 * c / 5 + 32;

    return farenheit;
}

int main()
{
    menu();
    printf("Number: ");
    scanf(" %d", &menuAnswer);

//Runs until user inputs three
    while (menuAnswer != 3)
    {   //If and else statements based on what user inputs
        if (menuAnswer == 1)
        {
             
            printf("\nEnter a number to convert from degrees Fahrenheit to degrees Celsius:");
            scanf(" %d", &tempInput);
            int cel = farentocels(tempInput);

            printf("%d degree F = %d degree C", tempInput, cel);
            printf("\n\n");
            menu();
            printf("Number: ");
            scanf("%d", &menuAnswer);

        }

        if (menuAnswer < 0 || menuAnswer > 3)
        {
            printf("Invalid Entry. Try again!\n");
            menu();
            printf("Number: ");
            scanf("%d", &menuAnswer);
        }

        else if (menuAnswer == 2)
        {
            
            printf("\nEnter a number to convert from degrees Celsius to degrees Fahrenheit:");
            scanf(" %d", &tempInput);
            int faren = celstofaren(tempInput);

            printf("%d degree C = %d degree F", tempInput, faren);
            printf("\n\n");
            menu();
            printf("Number: ");
            scanf("%d", &menuAnswer);
        }

        else if (menuAnswer == 3)
        {
            break;
        }

    }

    return 0;
}
