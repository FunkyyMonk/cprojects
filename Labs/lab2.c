
/*Richard Phillips
Lab 2 - Output with variables
1/18/2023
*/
#include <stdio.h>

int main() {
   int number;
   int secondnumber;
   printf("Enter integer: \n");
   scanf("%d", &number);
   printf("You entered %d ", number);
   int square = number * number;
   printf("\n%d squared is %d\n", number, square);
   printf("Enter another integer: \n");
   scanf("%d", &secondnumber);
   int addition = number + secondnumber;
   printf("%d + %d is %d\n", number, secondnumber, addition);
   int multiplication = number * secondnumber;
   printf("%d * %d is %d", number, secondnumber, multiplication);
    return 0;
}
