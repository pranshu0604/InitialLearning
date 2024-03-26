/*
Encoded by Pranshu
Dated July 03, 2023, Monday
Subject: Driver Details Program Using Dynamic Memroy Allocation
Objective: Dynamic Memory Allocation
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Declaring Structure

typedef struct Driver_Details
{
    char name[39];
    char dlno[10];
    char route[64];
    int kmst;
} DD;

int main()
{
    int n;
    printf("How many Driver\'s Details do you want to enter? \n");
    scanf("%d", &n);
    fflush(stdin);
    DD *ptr;
    ptr = (DD *)malloc(n * sizeof(DD));

    for (int i = 0; i < n; i++)
    {
        printf("Enter Driver number %d\'s Information\n", i + 1);
        printf("Enter Driver\'s Name :\n");
        gets(ptr[i].name);
        fflush(stdin);
        printf("Enter Driver\'s License Number :\n");
        gets(ptr[i].dlno);
        fflush(stdin);
        printf("Enter Driver\'s Route :\n");
        gets(ptr[i].route);
        fflush(stdin);
        printf("Enter Kilometers Travelled by the Driver :\n");
        scanf("%d", &ptr[i].kmst);
        fflush(stdin);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The details of Driver number %d are :\n", i + 1);
        printf("The name of the driver is : %s\n", ptr[i].name);
        printf("The License Number of Driver is : %s\n", ptr[i].dlno);
        printf("The Driver\'s Route is : %s\n", ptr[i].route);
        printf("Number of Kilometers Travelled by the Driver are : %d\n\n", ptr[i].kmst);
    }

    free(ptr);

    return 0;
}