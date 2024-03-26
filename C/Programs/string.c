/*Encoded by Pranshu
Dated Monday, June 19 , 2023
Objective String Functions
Subject Concatenation*/


#include <stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    char s2[10];
    printf("Enter the name of first person\n");
    gets(s1);
    printf("Enter the name of second person\n");
    gets(s2);
    char s3[]=" is a friend of ";
    strcat(s1,s3);            //Concatenation stored in s1
   
    printf(strcat(s1,s2));              //Full Concatenation again stored in s1
    printf("\n");
    
    printf("%s",s1);   //verifying the last comment
    return 0;
}