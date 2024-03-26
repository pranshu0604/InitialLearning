/*
Encoded by Pranshu
Dated June 26, 2023; Monday
Subject: HTML Parser/Text Extractor
Objective: Logic Building
*/

#include <stdio.h>
#include <string.h>
// Declaring Functions

char *HTMLP(char *str)
{
    // Removing Tags

    int in;
    int index = 0;
    for (int i = 0; i < strlen(str); i++)
    {

        if (str[i] == '<')
        {
            in = 0;
            continue;
        }

        else if (str[i] == '>')
        {
            in = 1;
            continue;
        }

        if (in == 1)
        {
            str[index] = str[i];
            index++;
        }
    }
    str[index] = '\0';

    // Removing Leading Spaces

    while (str[0] == ' ')
    {
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i + 1];
        }
    }

    // Removing Trailing Spaces

    while (str[strlen(str) - 1] == ' ')
    {
        str[strlen(str) - 1] = '\0';
    }

    return str;
}

int main()
{
    printf("Enter the HTML Line you want to parse.\n");
    char str[150];
    gets(str);
    HTMLP(str);
    printf("The extracted text is ~~%s~~", str);
    return 0;
}