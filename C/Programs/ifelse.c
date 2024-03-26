#include <stdio.h>

/*Encoded by Pranshu
Dated 11 June 2023
Objective If Else Control statements*/

int main(int argc, char const *argv[])
{
    int age;

    printf("Enter your age \n");

    scanf("%d", &age);
    if (age<18)
    {
        printf("Sorry You are not eligible to vote. \n The voter must be or above 18 years of age. \n %d saal ruk jaa \n", 18-age);
    }

    else
    {
        printf("Enter in the Booth, You\'re Good to Go!");
    }

    printf("Thank You!");
    
    return 0;
}
