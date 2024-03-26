#include <stdio.h>

// Encoded by Pranshu 
// Dated June 16, 2023
/* Subject: Printing series of increasing stars upto the number specied by the user
and then the same in reversed pattern*/

// Declaring Functions

int pstar(int num)
{
    for (int i = 1; i <= num ; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
        
    }
}

int revpstar(int num)
{
    int i= num;
    while (i>0)
    {
        for (int j = 0; j < i ; j++)
        {
            printf("*");
        }

        printf("\n");
        i--;      
    }
    
}
int main()
{
    label:
    printf("\n");
    int num;
    printf("Enter the number of stars you want to get in the middle lines \n");
    scanf("%d", &num);
    pstar(num);
    revpstar(num);
    goto label;
    return 0;
}