/*Richard Phillips
I/O and Arithmetic
1/20/2023
Assignment 2
*/
#include <stdio.h>

int main()
{
    int firstnum, secondnum, diff, prod, firstnumsquare, secondnumsquare;

    printf("Enter the first number: ");

    scanf("%d", &firstnum);
    printf("\nYou entered %d\n\n", firstnum);

    printf("Enter the second number ");
    scanf("%d", &secondnum);
    printf("\nYou entered %d\n\n\n", secondnum);

    diff = firstnum - secondnum;
    printf("The difference is %d\n\n", diff);

    prod = firstnum * secondnum;
    printf("The product is %d.\n\n", prod);

    firstnumsquare = firstnum * firstnum;
    printf("Square of %d is %d.\n\n", firstnum, firstnumsquare);

    secondnumsquare = secondnum * secondnum;
    printf("Square of %d is %d.\n\n", secondnum, secondnumsquare);

    printf("Thank you.");

    return 0;
}
