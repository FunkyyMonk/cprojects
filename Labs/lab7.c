/*Richard Phillips
LAB 6 
2/27/2023*/
#include <stdio.h>

int main()
{   
    int scores = 9;
    int list[scores];
    int input = 0;
    int i = 0;


    while (input >= 0)
    {
        printf("Enter your numbers: ");
        scanf("%d", &input);

        if (i > 9)
        {
            printf("\nToo many values.\n");
        }

        if (input < 0)
        {
            break;
        }

        list[i] = input;
        i++;

    }
    int middle_index = i/2;
    printf("Middle item: %d\n\n\n", list[middle_index]);



//PROBLEM 2 - REVERSE
int num1 = 20;
int array [num1];
int num2;
printf("Enter the number:");
scanf("%d", &num2);


for (int i = 0; i < num2; i++)
{
    printf("Enter a number:");
    scanf("%d", &array[i]);
}


printf("Reversed:");
for (int j = num2 - 1; j >= 0; j--)
{
    printf("%d,",array[j]);
}
    

    return 0;
}