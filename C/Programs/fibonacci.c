#include <stdio.h>
// Encoded by Pranshu
// Dated 15 June 2023
// Objective : Difference in time taken by recursive and iterative method for the same problem
// Subject : Fibonacci Series
// Returns blunders as of now, needs debugging/corrections

// Declaring Functions:

// 1. Recursive method

int fib_rec(int num)
{
    if (num == 0)
    {
        return num;
    }

    else
    {
        return num + fib_rec(num - 1);
    }
}

int fib_itr(int num)
{
    int ans=0;
    for (int i = 0; i <= num ;)
    {   
        ans=ans+i;
        i++;
    }
    return ans;
}

// __main__

int main(int argc, char const *argv[])
{
    label:
    printf("");
    int ch;
    printf("Press 1 if you want to Calculate Fibonacci Number using recursive method\n");
    printf("Press 2 if you want to Calculate Fibonacci Number using iterative method\n");
    printf("Press 3 if you want to quit. \n");
    scanf("%d", &ch);

    int number;
    if (ch==1)
    {
        printf("Enter the number\n");
        scanf("%d", &number);
        printf("The Desired Fibonacci number is %d\n", fib_rec(number));
        goto label;
    }

    else if (ch==2)
    {
        printf("Enter the number\n");
        scanf("%d", &number);
        printf("The Desired Fibonacci number is %d\n", fib_itr(number));
        goto label;
    }

    else if (ch==3)
    {
        goto end;
    }
    
    else
    {
        printf("Enter valid input\n");
        goto label;
    }
    
    end:
    printf("Quitting...");
    return 0;
}
