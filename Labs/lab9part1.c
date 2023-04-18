/*
Richard Phillips
COP3223C
Lab 9 Part 2
3/22/2023
*/
#include <stdio.h>
#include <string.h>

int main()
{
const int nums = 20;
int integer[nums];
int n, threshold;

scanf("%d", &n);
for(int i = 0; i < n; i++)
{   
    scanf("%d,", &integer[i]);
}

scanf("%d", &threshold);
for (int i = 0; i < n; i++)
{
    if (integer[i] < threshold)
        printf("%d,", integer[i]);
}
    return 0;
}
