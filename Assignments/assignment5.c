/*Richard Phillips
2/10/2023
Assignment 5
A program that includes the use of ++, += and achieves the following tasks using loops*/

#include <stdio.h>

int main(){
//A loop that will output all the multiples of 5 that are greater than zero and less than 60 
    for (int a = 5; a <= 55; a+= 5)
    {
        printf("%d ", a);
    }
        printf("\n");

//A loop that will output all the numbers less than 200 that are evenly divisible by both 2 and 7.
    for (int b = 14; b < 200; b+= 14)
    {
        printf("%d ", b);
    }
        printf("\n");

//A loop that will calculate the sum of the multiples of 8 that are between 100 and 500
    int result = 0;
    for (int c = 104; c <= 500; c++)
    {   
        if (c % 8 == 0)
        {
            result += c;
        }
    }
        printf("%d ", result);
        printf("\n");

//A loop that will output the sum of all odd numbers between 20 and 100.
    int result2 = 0;
    for (int e = 20; e < 100; e++)
    {
        if (e %2 != 0)
        {
            result2 += e;
        }
    }   
        printf("%d ", result2);
    return 0;
}