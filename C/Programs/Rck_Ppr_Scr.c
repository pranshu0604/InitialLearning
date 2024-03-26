/*
Encoded by Pranshu
Dated July 06 2023, Thursday
Subject: Rock Paper Scissors Game
Objective: Creating a random Number
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

// Declaring Functions

int genrannum() // FF Generate Random Number
{
    srand(time(NULL));
    int num = rand() % 3;
    return num;
}

void W_point()
{
    printf("Oops! I lost this score to you!\n\n");
    sleep(1);
}

void L_point()
{
    printf("Yayyy! I won!\n\n");
    sleep(1);
}

void D_point()
{
    printf("Woah... A Draw...\n\n");
    sleep(2);
}

void cont()
{
    char *temp;
    temp = (char *)malloc(1 * sizeof(char));
    printf("Press any key to continue. \n");
    scanf(" %s", temp);
    free(temp);
}

// __main__

int main()
{
    char *pname;
    pname = (char *)malloc(10 * sizeof(char));
    printf("Enter Player's Name: \n");
    scanf(" %s", pname);

    printf("Dear %s, Let's Play a game of Rock, Paper and Scissors \n", pname);
    sleep(2);
    printf("As soon as you write your choice, I will tell mine. \n");
    sleep(2);
    printf("Believe me I won't look at your choice already, I\'m just a bot after all :/ \n");
    sleep(3);
    printf("There will be three rounds. \n");
    cont();

    int cp; // FF Computer points
    int pp; // FF Player Points

label_opted_new_game:
    printf("");

    cp = 0;
    pp = 0;

    int i = 0;
    while (i < 3)
    {
        int num;
        num = genrannum();

        char *cch; // FF Computer's Choice
        cch = (char *)malloc(10 * sizeof(char));

        if (num == 0)
        {
            cch = "Rock";
        }

        else if (num == 1)
        {
            cch = "Paper";
        }

        else
        {
            cch = "Scissor";
        }

        printf("Round %d! \n",i+1);
        sleep(1);
        printf("Rock! \n");
        sleep(1);
        printf("Paper! \n");
        sleep(1);
        printf("Scissor! \n");
        sleep(1);
        printf("Shoot!!! \n");

        char *pch; // FF Player's Choice
        pch = (char *)malloc(10 * sizeof(char));

        scanf(" %s", pch);

        printf("Computer\'s choice: %s \n", cch);
        sleep(2);

        if (strcmp(cch, "Rock") == 0 && (strcmp(pch, "Paper") == 0 || strcmp(pch, "paper") == 0))
        {
            pp++;
            W_point();
        }

        else if ((strcmp(cch, "Rock") == 0) && (strcmp(pch, "Scissor") == 0 || strcmp(pch, "scissor") == 0))
        {
            cp++;
            L_point();
        }

        else if ((strcmp(cch, "Paper") == 0) && (strcmp(pch, "Scissor") == 0 || strcmp(pch, "scissor") == 0))
        {
            pp++;
            W_point();
        }

        else if ((strcmp(cch, "Paper") == 0) && (strcmp(pch, "Rock") == 0 || strcmp(pch, "rock") == 0))
        {
            cp++;
            L_point();
        }

        else if ((strcmp(cch, "Scissor") == 0) && (strcmp(pch, "Rock") == 0 || strcmp(pch, "rock") == 0))
        {
            pp++;
            W_point();
        }

        else if ((strcmp(cch, "Scissor") == 0) && (strcmp(pch, "Paper") == 0 || strcmp(pch, "paper") == 0))
        {
            cp++;
            L_point();
        }

        else if ((strcmp(cch, "Rock") == 0) && (strcmp(pch, "Rock") == 0 || strcmp(pch, "rock") == 0))
        {

            D_point();
            printf("Playing Round %d again...\n\n", i + 1);
            i--;
        }

        else if ((strcmp(cch, "Paper") == 0) && (strcmp(pch, "Paper") == 0 || strcmp(pch, "paper") == 0))
        {

            D_point();
            printf("Playing Round %d again...\n", i + 1);
            i--;
        }

        else if ((strcmp(cch, "Scissor") == 0) && (strcmp(pch, "Scissor") == 0 || strcmp(pch, "scissor") == 0))
        {

            D_point();
            printf("Playing Round %d again...\n\n", i + 1);
            i--;
        }

        else
        {
            printf("Please Enter a Valid Choice\n");
            i--;
            sleep(1);
        }

        printf("Round %d score :\n", i + 1);
        printf("Computer : %d\n", cp);
        printf("%s : %d\n\n", pname, pp);
        sleep(2);

        i++;
    }

    printf("Final Score :\n");
    printf("Computer : %d\n", cp);
    printf("%s : %d\n", pname, pp);

    if (cp > pp)
    {
        printf("You lost. Better Luck Next Time \n\n");
    }

    else
    {
        printf("You Won! Keep it up! \n\n");
    }

    char new_game;
    printf("Do you want to play another match\? Press \'y\' for Yes or any other key for No.\n");
    scanf(" %c", &new_game);

    if (new_game == 'y')
    {
        printf("Here we go again\n");
        goto label_opted_new_game;
    }

    return 0;
}