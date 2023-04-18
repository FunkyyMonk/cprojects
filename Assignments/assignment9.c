/*
    Name: Richard Phillips
    Program Number: COP 3223C
    Title: Assignment 9 
    Date: 3/21/2023
*/
#include <stdio.h>
#define ROWS 4
#define COLS 5

int main()
{
    int grades[ROWS][COLS];
    int row, column;
    double total, avg, sum;
    for(int q = 0; q < ROWS; q++)
    {
        for(int r = 0; r < COLS; r++)
        {
            printf("Grades: [%d] [%d] = ", q, r);
            scanf("%d", &grades[q][r]);
            grades[q][r];
        }
    }

    for(row = 0; row < 4; row++)
        {
            total = 0;
            for(column = 0; column < 5; column++)
            {
                total += grades[row][column];
            }
            avg = total / column;
            printf("\n\nThe average score for student %d is %.2lf.",row + 1, avg);
        }
    
        for(int b = 0; b < column; b++)
        {
            total = 0;
            for(int c = 0; c < row; c++)
            total += grades[c][b];
            avg = total / row;
            printf("\n\nThe average score for quiz %d is %.2f.", b + 1, avg);
        }
    
    for(int i = 0; i < row; i++)
        {
            for(int a = 0; a < 5; a++)
            {
                sum += grades[i][a];
            }
        }

    avg = sum / (row * column);
    printf("\n\nThe average score all quizzes for students is %.2f.\n", avg);

}