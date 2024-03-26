#include<stdio.h>
int main(int argc, char const *argv[])
{
    int max;
    printf("Enter maximum number of stars \n");
    scanf(" %d",&max);
    printf("\nPattern 1 : \n\n");
    for (int i = 1; i <= max; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    printf("\nPattern 2 : \n\n");
    int max2;
    if (max%2==0)
    {
        max2=max-1;
    }
    else
    {
        max2=max;
    }
    int mp=(max2+1)/2;
    int k=1;
    for (int i = 1; i <= max2 ; i+=2)
    {
        for (int j = 1; j <= mp-k ; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i ; j++)
        {
            printf("*");
        }
        printf("\n");
        k++;      
    }
    k-=2;
    for (int i = max2-2; i >= 1; i-=2)
    {
        for (int j = 1; j <= mp-k ; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i ; j++)
        {
            printf("*");
        }
        printf("\n");
        k--;
    }    
    printf("\nPattern 3 : \n\n");
    for (int i = 1; i <= max ; i++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 1; i <= max-1 ; i++)
    {
        printf("*");
        for (int j = 1; j <= max-2; j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for (int i = 1; i <= max ; i++)
    {
        printf("*");
    }
    return 0;
}