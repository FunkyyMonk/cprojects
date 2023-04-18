/*Richard Phillips
2/17/2023
Assignment 6
Write a program that will allow a user to enter as many numbers as they want.
*/
#include <stdio.h>

int main() {
    int count = 0;
    float num, sum = 0, low, high;

    printf("Enter a number (Negatives numbers will end the code.): ");
    scanf("%f", &num);
    low = high = num;

    while (num > 0) {
        count++;
        sum += num;

        if (num < low) {
            low = num;
        }

        if (num > high) {
            high = num;
        }

        printf("Enter a number (Negatives numbers will end the code.): ");
        scanf("%f", &num);
    }

    if (count > 0) {
        float average = sum / count;
        printf("The lowest number was: %.2f\n", low);
        printf("The highest number was: %.2f\n", high);
        printf("The number of values entered was: %d\n", count);
        printf("The average of the numbers was: %.2f\n", average);
    } 
    return 0;
}