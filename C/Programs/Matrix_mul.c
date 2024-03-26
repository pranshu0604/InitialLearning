/*
Encoded by Pranshu
Dated 08 July 2023, Saturday
Subject : Matrix Multiplier
Objective: Logic Building
*/

#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
// #include <unistd.h>
// #include <time.h>

int main()
{
    int first_row; // Number of Rows in the First Matrix
    int first_col; // Number of Columns in the First Matrix
    int sec_row;   // Number of Rows in the second Matrix
    int sec_col;   // Number of Columns in the second Matrix

    printf("Enter the number of rows in the first matrix \n");
    scanf(" %d", &first_row);

    printf("Enter the number of columns in the first matrix \n");
    scanf(" %d", &first_col);

    printf("Enter the number of rows in the second matrix \n");
    scanf(" %d", &sec_row);

    if (first_col != sec_row)
    {
        printf("The matrices cannot be multiplied. \n");
        printf("The Column of the First Matrix and The Column of the Second Matrix are not Equal.\n");
    }
    else
    {
        printf("Enter the number of columns in the second matrix \n");
        scanf(" %d", &sec_col);

        int mtx1[first_row][first_col];
        int mtx2[sec_row][sec_col];

        printf("\nEnter the values in the matrix A : \n");
        for (int i = 0; i < first_row; i++)
        {
            for (int j = 0; j < first_col; j++)
            {
                printf("Enter element a%d%d : \n", i + 1, j + 1);
                scanf(" %d", &mtx1[i][j]);
            }
        }

        printf("\nEnter the values in the matrix B : \n");
        for (int i = 0; i < sec_row; i++)
        {
            for (int j = 0; j < sec_col; j++)
            {
                printf("Enter element b%d%d : \n", i + 1, j + 1);
                scanf(" %d", &mtx2[i][j]);
            }
        }

        printf("\nThe First Matrix is :\n");
        for (int i = 0; i < first_row; i++)
        {
            printf("[\t");
            for (int j = 0; j < first_col; j++)
            {
                printf("%d\t", mtx1[i][j]);
            }
            printf("]\n");
        }

        printf("\nThe Second matrix is :\n");
        for (int i = 0; i < sec_row; i++)
        {
            printf("[\t");
            for (int j = 0; j < sec_col; j++)
            {
                printf("%d\t", mtx2[i][j]);
            }
            printf("]\n");
        }

        printf("\nMultiplying the Matrices...\n\n");

        int mtxf[first_row][sec_col]; // FF Final Matrix
        for (int i = 0; i < first_row; i++)
        {
            for (int j = 0; j < sec_col; j++)
            {
                int temp = 0;
                for (int k = 0; k < first_col; k++)
                {
                    temp = temp + (mtx1[i][k] * mtx2[k][j]);
                }
                mtxf[i][j] = temp;
            }
        }

        printf("The Final Matrix is :\n");
        for (int i = 0; i < first_row; i++)
        {
            printf("[\t");
            for (int j = 0; j < sec_col; j++)
            {
                printf("%d\t", mtxf[i][j]);
            }
            printf("]\n");
        }
    }

    return 0;
}