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
    const int n_words = 20, n_chars = 10;
    char words[n_words][n_chars];
    int freq[n_words];
    int num_words;
    char curr_word[n_chars];

    scanf("%d", &num_words);

    for(int i = 0; i < num_words; i++)
    {
        scanf("%s",words[i]);
        printf("I is currently %d\n", i);
        strcpy(words[i], curr_word);
        freq[i] = 0;
    }

    for (int i =  0; i < num_words; i++)
    {
        for (int j = 0; i < num_words; j++)
        {
            if(strcmp(words[i], words[j]) == 0)
                freq[i] += 1;
        }
    }

    for (int i = 0; i < num_words; i++)
    {
        printf("%s - %d\n", words[i], freq[i]);
    }

    return 0;
}