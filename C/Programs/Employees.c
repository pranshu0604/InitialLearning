/*
Author: Pranshu <pranshu0604@gmail.com>
Dated July 03,2023 Monday
Subject: Input Employee ID from user also asking the number of characters it has
Objective: Dynamic memory Allocation
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    for (int i = 0; i < 3; i++)
    {
        int num;
        printf("For Employee %d\n", i + 1);
        printf("How many characters does the ID have\?\n");
        scanf(" %d", &num);
        char *ptr;
        ptr = (char *)malloc(num * sizeof(char));
        printf("Enter EmployeeID.\n");
        scanf(" %s",ptr);
        printf("The Employee ID of Employee %d is %s\n\n",i,ptr);
        free(ptr);
    }

    return 0;
}