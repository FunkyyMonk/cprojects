/*Richard Phillips
COP3223C
Section 00150
Assignment 7
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ADD 1;
#define MULT 1;
void menuOptions();
double arithGame(int max, int quantity, int op);
double guessGame(int max);
int numDigits(int number);
int numPoints(double timesec);

//Function that when called prints out the menu. 
void menuOptions()
{
    printf("Please make a selection from the following:\n");
    printf("1. Play Arithmetic Game.\n");
    printf("2. Play Guessing Game.\n");
    printf("3. Print Score.\n");
    printf("4. Quit.\n");
}

// This function gives the user quantity arithmetic
// questions, where each operand ranges from 1 to max,
// inclusive. The value of operator dictates whether
// the problems are addition or multiplication problems.
// Namely, if op is 1, they are addition problems,
// otherwise, they are multiplication problems.
// The function returns the number of seconds the user took
// to play the entire game, divided by the number of 
// problems they solved. 
double arithGame(int max, int quantity, int op)
{
    int start = time(0);
    for(int i = 0; i < quantity; i += 1)
    {
        int num1 = rand() % max + 1;
        int num2 = rand() % max + 1;
        int choice = 0;
        int total = 0;

        if (op = 1)
        {
            int total = num1 + num2;
            printf("%d + %d = ", num1, num2);
            scanf("%d", &choice);

            if (choice == total)
            {
                printf("Correct, great job!\n");
            }
            else
            {
                printf("Sorry, that's incorrect, the answer is %d\n", total);
                start -= 5;
            }
        }
        else
        {
            int total = num1 * num2;
            printf("%d * %d = ", num1, num2);
            scanf("%d", &choice);

            if (choice == total)
            {
                printf("Correct, great job!");
            }
            else
            {
            printf("Sorry that's incorrect, the answer is %d", total);
            start -= 5;
            }
        }
    }
    int ending = time(0);
    int totaltime = ending - start;
    printf("You took an average of %1.f seconds per question.", (double)totaltime);
    printf("\n");
    printf("\n");
    return totaltime/quantity;
}
// This function allows the user to play the guessing game
// where the randomly generated number lies in between 1 
// and max, inclusive. The value returned is the number of
// seconds the user took to finish the game divided by the
// 2 times the number of digits in the number max.
double guessGame(int max)
{
    int choice = 0;
    int numofGuesses = 1;
    int start = time(0);
    int answer = rand() % max + 1;
//Whiel loop that goes until answer is choosen. 
    while (choice != answer)
    {
        printf("Enter the guess!\n");
        scanf("%d", &choice);

        if (choice == answer)
        {
            break;
        }

        else if (choice < answer)
        {
            printf("Your guess is too low, try again.\n");   
            numofGuesses++;
        }

        else if (choice > answer)
        {
            printf("Your guess is too high, try again.\n");
            numofGuesses++;
        }

    }
        int ending = time(0);
        int totaltime = ending - start;
        printf("Great, you guessed the correct number %d in %d guesses in %d seconds.", answer, numofGuesses, totaltime);
        printf("\n");
        return totaltime / (2 * numDigits(max));
}
// Returns the number of digits in number.
int numDigits(int number)
{

    if (number == 0);
        return 1;
    int digits = 0;
    
    while(number != 0)
    {
        number = number / 10;
        ++digits;

    }
    return digits;


}
// Returns the number of points the user has earned based
// on time. In particular, if time is less than 1, 10 is 
// returned. Otherwise, if it is less than 2, 9 is 
// returned, etc. If time is greater than or equal to 10,
// then 0 is returned.
int numPoints(double timesec)
{
     if (timesec < 1)
     {
        printf("Your score for this round is 10.");
        return 10;
     }

     else if (timesec >= 1 && timesec < 2)
     {
        printf("Your score for this round is 9.");
        return 9;
     }

     else if (timesec >= 2 && timesec < 3)
     {
        printf("Your score for this round is 8.");
        return 8;
     }

     else if (timesec >= 3 && timesec < 4)
     {
        printf("Your score for this round is 7.");
        return 7;
     }

     else if (timesec >= 4 && timesec < 5)
     {
        printf("Your score for this round is 6.");
        return 7;
     }

     else if(timesec >= 5 && timesec < 6)
     {
        printf("Your score for this round is 5.\n");
        return 5;
     }

     else if(timesec >= 6 && timesec < 7)
     {
        printf("Your score for this round is 4.\n");
        return 4;
     }

     else if(timesec >= 7 && timesec < 8)
     {
        printf("Your score for this round is 3.\n");
        return 3;
     }
     else if(timesec >= 8 && timesec < 9)
     {
        printf("Your score for this round is 2.\n");
        return 2;
     }
     else if(timesec >= 9 && timesec < 10)
     {
        printf("Your score for this round is 1.\n");
        return 1;
     }

     else if(timesec >= 10)
     {
        printf("Your score for this round is 0.\n");
     }
}


int main()
{
    int result = 0;
    int totalpoints = 0;
    int menuChoice = 0;
    int arithmax = 0;
    int arithmultoradd;
    int arithprob = 0;
    int guessmax = 0;
    int curr_score = 0;

    menuOptions();
    scanf("%d", &menuChoice);
    srand(time(0));
    //Use switch to determine which case to use 
    switch(menuChoice){
        case 1:
            printf("Would you like, 1)Addition or 2)Multiplication?\n");
            scanf("%d", &arithmultoradd); 

            printf("What is the maximum number you would like?\n");
            scanf("%d", &arithmax);

            printf("How many problems do you want?\n");
            scanf("%d", &arithprob);

            double addresult = arithGame(arithmax, arithprob, arithmultoradd);
            totalpoints = numPoints(addresult);
            result += totalpoints;
            menuOptions();
            scanf("%d", &menuChoice);
            break;


        case 2: 
            printf("What is the maximum number you would like?\n");
            scanf("%d", &arithmax);
            double multresult = guessGame(arithmax);
            result += multresult;
            menuOptions();
            scanf("%d", &menuChoice);
            break;

        case 3:
            printf("Your score for the round is %d.\n", result);
            printf("\n");
            menuOptions();
            scanf("%d", &menuChoice);
            break;

        case 4: 
            printf("Thank your for playing!");
            break;
    } 
}