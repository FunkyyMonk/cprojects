/*
Name: Richard Phillips
Program Number: COP 3223
Title: Stats.c
Date: 3/20/2023
*/

#include <stdio.h>
#include <math.h>

void readGrades(double grades[], int *n);
void frequency(double grades[], int n);
int maximum(double grades[], int n);
int minimum(double grades[], int n);
void deleteElement(double grades[], int *n, int loc);
double mean(double grades[], int n);
double StandardDeviation(double grades[], int n);

/* This function reads an unknown number of grades (maximum
of 100) into the array grades and counts the data items
that have been read. You are not supposed to prompt the
user to enter the grades. Just use scanf to read in the
grades. The end of the input is represented by a negative
number –999 

Preconditions: An empty array which is initialized to 0
must be passed to the function.
Postconditions: Array holds the input values and n is the
effective size of the array (i.e the number of data items
read) */
void readGrades(double grades[], int *n)
{
    int a = 0;
    while(grades [a - 1] != -999)
    {
        scanf("%lf", &grades[a]);
        a++;
    }
    *n = a - 1;
}

/* Given an array of real numbers, this function finds out
frequency (number of students) for each interval 0-4, 5-
9,.....,95 – 99, 100 prints out the frequency values and
plots the histogram */
void frequency(double grades[], int n)
{
    int interval [100] = {0};
    printf("\nHere is the histogram of the adjusted data:\n\n");
    for (int i = 0; i < n; i++)
    {
        if (grades[i] >= 0 && grades[i] <= 4)
        {
            interval[0]++;
        }

        else if (grades[i] >= 5 && grades[i] <= 9)
        {
            interval[1]++;
        }

        else if (grades[i] >= 10 && grades[i] <= 14)
        {
            interval[2]++;
        }

        else if (grades[i] >= 15 && grades[i] <= 19)
        {
            interval[3]++;
        }

        else if (grades[i] >= 20 && grades[i] <= 24)
        {
            interval[4]++;
        }

        else if (grades[i] >= 25 && grades[i] <= 29)
        {
            interval[5]++;
        }

        else if (grades[i] >= 30 && grades[i] <= 34)
        {
            interval[6]++;
        }

        else if (grades[i] >= 35 && grades[i] <= 39)
        {
            interval[7]++;
        }

        else if (grades[i] >= 40 && grades[i] <= 44)
        {
            interval[8]++;
        }

        else if (grades[i] >= 45 && grades[i] <= 49)
        {
            interval[9]++;
        }

        else if (grades[i] >= 50 && grades[i] <= 54)
        {
            interval[10]++;
        }

        else if (grades[i] >= 55 && grades[i] <= 59)
        {
            interval[11]++;
        }

        else if (grades[i] >= 60 && grades[i] <= 64)
        {
            interval[12]++;
        }

        else if (grades[i] >= 65 && grades[i] <= 69)
        {
            interval[13]++;
        }

        else if (grades[i] >= 70 && grades[i] <= 74)
        {
            interval[14]++;
        }

        else if (grades[i] >= 75 && grades[i] <= 79)
        {
            interval[15]++;
        }

        else if (grades[i] >= 80 && grades[i] <= 84)
        {
            interval[16]++;
        }

        else if (grades[i] >= 85 && grades[i] <= 89)
        {
            interval[17]++;
        }

        else if (grades[i] >= 90 && grades[i] <= 94)
        {
            interval[18]++;
        }

        else if (grades[i] >= 95 && grades[i] <= 99)
        {
            interval[19]++;
        }

        else if (grades[i] == 100)
        {
            interval[20]++;
        }
    }

    printf("0 - 4|");
    for (int x = 0; x < interval[0]; x++)
    {
        printf("*");
    }

    printf("\n5 - 9|");
    for (int x = 0; x < interval[1]; x++)
    {
        printf("*");
    }

    printf("\n10-14|");
    for (int x = 0; x < interval[2]; x++)
    {
        printf("*");
    }

    printf("\n15-19|");
    for (int x = 0; x < interval[2]; x++)
    {
        printf("*");
    }

    printf("\n20-24|");
    for (int x = 0; x < interval[4]; x++)
    {
        printf("*");
    }

    printf("\n25-29|");
    for (int x = 0; x < interval[5]; x++)
    {
        printf("*");
    }

    printf("\n30-34|");
    for (int x = 0; x < interval[6]; x++)
    {
        printf("*");
    }

    printf("\n35-39|");
    for (int x = 0; x < interval[7]; x++)
    {
        printf("*");
    }

    printf("\n40-45|");
    for (int x = 0; x < interval[8]; x++)
    {
        printf("*");
    }

    printf("\n46-49|");
    for (int x = 0; x < interval[9]; x++)
    {
        printf("*");
    }

    printf("\n50-54|");
    for (int x = 0; x < interval[10]; x++)
    {
        printf("*");
    }

    printf("\n55-59|");
    for (int x = 0; x < interval[11]; x++)
    {
        printf("*");
    }

    printf("\n60-64|");
    for (int x = 0; x < interval[12]; x++)
    {
        printf("*");
    }

    printf("\n65-69|");
    for (int x = 0; x < interval[13]; x++)
    {
        printf("*");
    }

    printf("\n70-74|");
    for (int x = 0; x < interval[14]; x++)
    {
        printf("*");
    }

    printf("\n75-79|");
    for (int x = 0; x < interval[15]; x++)
    {
        printf("*");
    }

    printf("\n80-84|");
    for (int x = 0; x < interval[16]; x++)
    {
        printf("*");
    }

    printf("\n85-89|");
    for (int x = 0; x < interval[17]; x++)
    {
        printf("*");
    }

    printf("\n90-94|");
    for (int x = 0; x < interval[18]; x++)
    {
        printf("*");
    }

    printf("\n95-99|");
    for (int x = 0; x < interval[19]; x++)
    {
        printf("*");
    }

    printf("\n100  |");
    for (int x = 0; x < interval[20]; x++)
    {
        printf("*");
    }

    printf("\n"); 
}

/* Given an array of real numbers and the effective size of
the array (i.e. count of the numbers in the array), this
function returns the location of the highest number in the
array */
int maximum(double grades[], int n)
{
    int maximum = 0;
    for (int a = 1; a < n ; a++)
    {
        if(grades[a] > grades[maximum])
        {
            maximum = a;
        }
    }
    return maximum;
}

/* Given an array of real numbers and the effective size of
the array (i.e. count of the numbers in the array), this
function returns the location of the lowest number in the
array */
int minimum(double grades[], int n)
{
    int minimum = 0;
    for (int a = 1; a < n ; a++)
    {
        if(grades[a] < grades[minimum])
        {
            minimum = a;
        }
    }
    return minimum;
}

/* Given an array of real numbers, the effective size of
the array and the location of the element to be deleted,
this function deletes that element from the array and
decrements the effective size, n, by one */
void deleteElement(double grades[], int *n, int loc)
{
    for (int x = loc; x < *n - 1; x++)
    {
        grades[x] = grades[x + 1];
    }
    *n -= 1;
}

/* Given an array of numbers and the effective size of the
array this function computes and returns the mean */
double mean(double grades[], int n)
{
    double sum = 0;
    for (int x = 0; x < n; x++)
    {
        sum += grades[x];
    }
    return sum / n;
}

/* Given an array of numbers and the effective size of the
array, this function computes and returns the standard
deviation as described in the previous section */
double StandardDeviation(double grades[], int n)
{
    double meanGrade = mean(grades,n);
    double total = 0;
    for (int a = 0; a < n; a++)
    {
        total += pow(grades[a] - meanGrade, 2);
    }
    return sqrt(total / n);
}

int main()
{   
    int count, min, max, meanGrade;

    double grades[100] = {0};
    readGrades(grades, &count);
    min = minimum(grades, count);
    printf("\nThe data has been adjusted by removing the minimun: %.2lf \n", grades[min]);
    deleteElement(grades, &count, min);
    max = maximum(grades,count);
    printf("The data has been adjusted by removing the maximum: %.2lf \n", grades[max]);
    deleteElement(grades, &count, max);
    meanGrade = mean(grades, count);
    printf("The adjusted mean is: %.2lf \n", meanGrade);
    double standardDev = StandardDeviation(grades, count);
    printf("The adjusted standard deviation is: %.2lf\n", standardDev);
    frequency(grades, count);
    return 0;
}

