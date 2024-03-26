/*
Encoded by Pranshu
Dated July 10, 2023, Monday
Subject : Automated Receipt Generator(Append)
Objective : File I/O
*/

#include <stdio.h>
// #include <stdlib.h>
#include <string.h>
// #include <unistd.h>
// #include <time.h>

int main()
{
    printf("Welcome to \"Pranshu owns Nike Store\"\n");

    printf("Select Outlet.\n1.New Delhi Outlet \t 2.Noida Outlet \t 3.Gurugram Outlet\n");
    printf("Enter 1, 2 or 3\n");
    int num;
    char out[20];
    scanf(" %d", &num);

    if (num == 1)
    {
        strcpy(out, "New Delhi Outlet");
    }

    else if (num == 2)
    {
        strcpy(out, "Noida Outlet");
    }

    else if (num == 3)
    {
        strcpy(out, "Gurugram Outlet");
    }

    else
    {
        printf("Please Rerun the program and Enter a valid Input. \n");
    }

    if (num == 1 || num == 2 || num == 3)
    {

        printf("Enter the name of Customer \n");
        char cname[10];
        scanf(" %s", &cname);
        printf("Hello %s, Please Enter the Items that you want to purchase. \n", cname);
        FILE *ptr = NULL;
        ptr = fopen("letter.txt", "a");
        char ch = 'y';
        while (ch == 'y')
        {
            printf("How many Items do you want to purchase\? \n");
            int ch2;
            scanf(" %d", &ch2);
            char item[ch2][10];
            for (int i = 0; i < ch2; i++)
            {
                printf("For item number %d :\n", i + 1);
                printf("Enter serial Number Before the item to purchase \n");
                printf("1.Vest\t2.Bat\t3.Ball\t4.Shorts\t5.Supporter \n");
                static int ch3;
                scanf(" %d", &ch3);
                if (ch3 == 1)
                {
                    strcpy(item[i], "Vest");
                }
                else if (ch3 == 2)
                {
                    strcpy(item[i], "Bat");
                }
                else if (ch3 == 3)
                {
                    strcpy(item[i], "Ball");
                }
                else if (ch3 == 4)
                {
                    strcpy(item[i], "Shorts");
                }
                else if (ch3 == 5)
                {
                    strcpy(item[i], "Supporter");
                }

                else
                {
                    printf("You did not enter a Valid Input. Please run the program again \n");
                    break;
                }

                printf("Choice %d Entered. Item : %s \n", i + 1, item[i]);
            }
            fprintf(ptr, "Dear_%s,_Thanks_for_shopping_with_us._Visit_again_soon,_Hail_Pranshu!\n", cname);
            fprintf(ptr, "Outlet_:_%s\n", out);
            for (int i = 0; i < ch2; i++)
            {
                fprintf(ptr, "Item_%d_:_%s\n", i + 1, item[i]);
            }
            printf("Status : Success \n");
            printf("Do you want to shop more\? \n");
            scanf(" %c", &ch);
        }
        printf("Transaction ID : XXXXXXXX. \nThanks for Shopping with us!\nHail Pranshu!!");
        fclose(ptr);
    }

    return 0;
}