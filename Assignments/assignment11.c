/*
    Name:Richard Phillips
    Program Number:COP 3223C
    Title:Assignment 11
    Date:3/25/2023
*/

#include <stdio.h>
#include <string.h>

int main() {
    char uncoded[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char coded[] = "HIVJKWLAMYNBXOZCTPUDQSRGFE";
    char input[100], encoded[100];
    int i, j;

    while (1) 
    {
        printf("Enter stop to exit the code.\n");
        printf("Enter a string to encode: \n");
        scanf("%s", input);
        if (strcmp(input, "stop") == 0) {
            break;
        }
        for (i = 0; i < strlen(input); i++) 
        {
            for (j = 0; j < 26; j++) 
            {
                if (input[i] == uncoded[j]) 
                {
                    encoded[i] = coded[j];
                    break;
                }
            }
        }
        encoded[i] = '\0';
        printf("Uncoded word: %s\n", input);
        printf("Encoded word: %s\n", encoded);
    }

    return 0;
}

 
