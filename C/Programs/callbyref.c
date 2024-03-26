/*
Encoded by Pranshu
Sunday, June 18, 2023
Objective : Call by reference
Subject : A function that modifies value in global variables
and changes them into their sum and differences
*/

// Declaring Function

void chad(int* a, int* b)
{
    int ai, bi;                   //Declaring initial variables
    ai= *a;
    bi= *b;
    int af,bf;                   //Declaring final variables
    af= ai+bi;
    bf= ai-bi;
    *a=af;
    *b=bf;
    return;
}


#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first number: \n");
    scanf("%d", &a);
    printf("Enter the second number: \n");
    scanf("%d", &b);
    printf("The numbers are %d and %d\n", a, b);
    chad(&a, &b);
    printf("The sum is %d\n", a);
    printf("The difference is %d\n", b);
    return 0;
}