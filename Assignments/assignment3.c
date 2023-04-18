/* Richard Phillips
2/1/2023
Assignment 3
Creating a shipping calculator that determines the price based on the weight and miles*/

#include <stdio.h>

int main(){
    //Initialize variables
    float weight, price;
    int miles; 

    printf("Weight: ");
    scanf("%f", &weight);

    printf("\nMiles: ");
    scanf("%d", &miles);

    // When weight is equal to 50, print we can't ship it 
    if (weight > 50)
    {
    printf(" Sorry, we only ship packages of 50 pounds or less.");
    return 0;
    }

//Tells how many segments based on how many miles inputted
    float segment;
    segment =  (miles + 499) / 500;

//When eight is equal to 10, price is equal to 3
    if (weight <= 10.0)
        {
            price = segment * 3.00;
        }

    else
        {
            //When price is not equal to 3, price is equal to 5
            price = segment * 5.00;   
        }

//When miles are more than 1000, we add 10 to the price 
    if (miles > 1000)
        price += 10.0;
        
printf("\nYour shipping charge is $%.2f", price);

    return 0;
    
}
