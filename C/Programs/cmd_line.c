/*
Encoded by Pranshu
2:25 AM, July 13, 2023, Thursday
Subject : Automated Receipt Generator(Append)
Objective : File I/O
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if (argc >= 2)
    {
        int num1, num2;
        num1 = atoi(argv[2]);
        num2 = atoi(argv[3]);
        if (strcmp(argv[1], "add") == 0)
        {
            int sum;
            sum = num1 + num2;
            printf("The sum is %d", sum);
        }

        else if (strcmp(argv[1], "subtract") == 0)
        {
            int sub;
            sub = num1 - num2;
            printf("The difference is %d", sub);
        }

        else if (strcmp(argv[1], "multiply") == 0)
        {
            int mul;
            mul = num1 * num2;
            printf("The product is %d", mul);
        }

        else if (strcmp(argv[1], "divide") == 0)
        {
            float quo;
            quo = (float)num1 / num2;
            printf("The quotient is %f", quo);
        }
    }

    else
    {
        printf("Enter Valid Arguments. \n");
    }

    return 0;
}
