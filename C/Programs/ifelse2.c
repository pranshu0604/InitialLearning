#include <stdio.h>

/*Encoded by Pranshu Pandey 
Dated June 11 2023
Objective If Else Control Statements and operators*/
//rectified exceptions

int main(int argc, char const *argv[])
{
    int st;       //defining status variables

    printf("Type 1 if you have passed only in math\n");
    printf("Type 2 if you have passed in only science\n");
    printf("Type 3 if you have passed in both\n");
    printf("Type your respone....\n");

    scanf("%d",&st);

    if (st==1 || st==2)  
    {
        printf("Well Congo! You recieve sasta wala gift!");
    }
    
    else if (st==3)
    {
        printf("Arre bhai congratulations you won mehenga wala gift!!");
    }

    else
    {
        printf("Jaa na gareeb");
    }
    

    
    return 0;
}