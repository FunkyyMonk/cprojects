/*Richard Phillips
3/8/2022
Lab 8-1
Understand and apply the concept of pointers in C programming*/

#include <stdio.h>

//Initialize functions
void swap(int *p1, int *p2);
void multiply(double *p3);

int main()
{
    //initialize integers variables and pointers
    int a = 5, b = 10;
    int *pA = &a, *pB = &b;

    //dereference operator
    printf("a = %d, b = %d\n",*pA, *pB);
    printf("pA = %p, pB = %p\n",&a, &b); 
    printf("&a = %p, &b = %p\n",pA, pB);

    //calls function swap and gives two arguments
    swap(pA, pB);
    printf("a = %d, b = %d\n",*pA, *pB);
    //initialize a double variable 
    double c = 3.140000;
    double *pC = &c;
    printf("c = %lf\n", *pC);
    printf("pC = %p\n", pC);
    multiply(pC);
    printf("c = %lf\n", *pC);

    return 0;
}


void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void multiply(double *p3)
{
    *p3 = *p3 * 2;
}