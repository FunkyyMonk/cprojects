/*
    Prisha Patel
    COP 3223C
    March 29, 2023
    Lab 1 - Movie Show Time Display
*/

# include <string.h>
# include <stdio.h>
# include <stdlib.h>

int main()
{
    const int num_title = 44;
    const int num_line = 100;
    char line[num_line]; // in order to read the file
    char input_name[25];
    
    char show_time[10];
    char rating[10];
    
    // movie titles
    char current_title[80] = "";
    char previous_title[80] = "";
    
    int show_index;
    int title_index;
    int rating_index;
    int line_index;
    
    printf("Enter the file name:\n");
    scanf("%s", input_name);
    
    // file pointer declarations
    FILE* in_file;
    in_file = fopen(input_name, "r");
    
    if(in_file == NULL)
    {
        printf("Could not open the file %s\n", input_name);
        return -1;
    }
    
    // first input stream of the file
    fgets(line, num_line, in_file);
    
    while(!feof(in_file))
    {
        // extracting show times
        line_index = 0;
        show_index = 0;
        while(line[line_index] != ',')
        {
            show_time[show_index] = line[line_index];
            show_index++;
            line_index++;
        }
        show_time[show_index] = '\0';
        
        // extracting movie titles
        line_index += 1;
        title_index = 0;
        while (line[line_index] != ',')
        {
            current_title[title_index] = line[line_index];
            title_index++;
            line_index++;
        }
        current_title[title_index] = '\0';
        
        // extracting rating
        line_index += 1;
        rating_index = 0;
        while(line[line_index] != '\n')
        {
            rating[rating_index] = line[line_index];
            rating_index++;
            line_index++;
        }
        rating[rating_index] = '\0';
        
        if (strlen(current_title) > num_title)
        {
            current_title[num_title] = '\0';
        }
        if(strcmp(current_title, previous_title) == 0)
        {
            printf(" %s", show_time);
        }
        else
        {
            if(strcmp(previous_title, "") != 0)
            {
                printf("\n");
            }
            printf("%-44s | %5s | %s", current_title, rating, show_time);
            strcpy(previous_title, current_title);
        }
        fgets(line, num_line, in_file);
    }
    
    printf("\n");
    fclose(in_file);
    return 0;
}