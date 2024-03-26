/*
Encoded by Pranshu
Dated July 09,2023 Sunday
Subject : Checking if a number is a Palindrome
Objective : Logic Building
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <unistd.h>
// #include <time.h>

// Declaring functions

int chk_Palindrome(int num)
{
    char str[10];
    itoa(num,str,10);          //itoa is a function from stdlib.h
    char OG[10];
    strcpy(OG,str);
    int endp=strlen(str)/2;    //FF Endpoint for Loop
    for (int i = 0; i < endp; i++)
    {
        char temp;
        temp=str[i];
        str[i]=str[strlen(str)-1-i];
        str[strlen(str)-1-i]=temp;
    }

    if (strcmp(OG,str)==0)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

/* ***** Ignore this Comment during dry run *******************

Could Also Do it Like this without changing to string inside the function

int isPalindrome(int num)
{
    int reversed = 0;
    int originalNumber = num;

    // Lets reverse the number
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }

    printf("The reversed number is %d\n", reversed);

    if (originalNumber == reversed)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

*/

int main()
{
    printf("Enter number to check if it is a Palindrome or not. \n");
    int num;
    scanf(" %d",&num);
    if (chk_Palindrome(num)==1)
    {
        printf("The number %d is a Palindrome.",num);
    }
    else
    {
        printf("The number %d is not a Palindrome.",num);
    }
    
    return 0;
}