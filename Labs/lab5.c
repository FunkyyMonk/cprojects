/*Richard Phillips
2/21/2022
Lab5-Finding the max and average*/

#include <stdio.h>

int main()
{
    int sum, input, count, max, avg;
    float total = 0.0;

    sum = 0;
    count = 0;
    max = 0;

    while (input >= 0)
    {
        printf("Enter numbers: ");
        scanf("%d", &input);
        sum += input;
        count++;
        
        if (input < 0)
        {
            sum -= input;
            count--; 
        }
        
        if (input > max)
        {
            max = input;
        }
        
        total = (float)sum/count;
    
    }

    printf("%d %.2f", max, total);

    return 0;
    
}