/*
Encoded by Pranshu
Dated 19 June 2023, Monday
Objective: Arrays
Subject: Reversing the order of elements in an array
*/
#include <stdio.h>
void revarray(int arr[], int s)
{
    int endp = s / 2;
    for (int i = 0; i <= endp; i++)
    {
        int j = arr[i];
        arr[i] = arr[s - 1 - i];
        arr[s - 1 - i] = j;
    }

    printf("The new order is: \n");
    for (int i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }

    return;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    revarray(arr, 5);
    return 0;
}