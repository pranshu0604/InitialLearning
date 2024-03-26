#include<stdio.h>

// Encoded by Pranshu
// Dated 12 June 2023
// Objective switchcase Statemenrs and nested commands

int main(int argc, char const *argv[])
{
    int age,vcd;          //declaring age and voter id card variables
    printf("Are you over 18\? Type 1 for yes and 0 for no\n");
    scanf("%d", &age);
    switch (age)
    {
    case 1:

        printf("Do you have a voter ID card\? Type 1 for yes and 0 for no\n");
        scanf("%d", &vcd);
        switch (vcd)
        {
        case 1:
            printf("Please Enter the Booth. You are Good to Go!");
            break;
        
        case 0:
            printf("Sorry, You must have a Voter Id card provided by the Electoral Commision of India");
            break;

        default:
            printf("Jaa na bsdk");
            break;
        }
        break;
    case 0:
        printf("Sorry you must be over 18 years of age");
        break;

    default:
        printf("Jaa na bsdk");
        break;
    }
    return 0;
}