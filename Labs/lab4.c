/*Richard Phillips 
2/1/2023
Lab 4-1*/

#include <stdio.h>
int main()
{
//PROBLEM 1
int fvalue, svalue;

printf("Enter two values: ");
scanf("%d %d", &fvalue, &svalue);
if (fvalue > svalue)
{
    printf("%d", fvalue);
}
else
{
    printf("%d", svalue);
}

//PROBLEM 2
int speedlimit, dr_speed;
int ticket = 0;
printf("\nEnter the speed limit and driving speed: ");
scanf("%d %d", &speedlimit, &dr_speed);

if (dr_speed < speedlimit)
{
    int slowness = speedlimit - dr_speed;
    if (slowness <= 9){
        ticket = 0;
        printf("\n%d", ticket);}

    else if(slowness >= 10)
        {ticket = 50;
        printf("\n%d", ticket);}
}
else
{
    int fast = dr_speed - speedlimit;
    if (fast >= 6 && fast <= 20)
        {ticket = 75;
        printf("\n%d", ticket);}

    else if(fast >= 21 && fast <= 40)
        {ticket = 150;
        printf("\n%d", ticket);}

    else if (fast > 40)
        {ticket = 300;
        printf("\n%d", ticket);}
}

//PROBLEM 3 
int r, g, b;
int lowest;

printf("\n\nInput values: ");
scanf("%d %d %d", &r, &g, &b);

if (r<g && r<b)
    lowest = r;
else if (g<r && g<b)
    lowest = g;
else
    lowest = b;

r = r-lowest;
g = g-lowest;
b = b-lowest;

printf("Gray part removed:   %d %d %d\n", r,g,b);

return 0;
}
