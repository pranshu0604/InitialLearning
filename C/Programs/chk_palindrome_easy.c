#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//#include <unistd.h>
//#include <time.h>
//#include <math.h>
int main()
{
    int org,num,temp,new=0;
    printf("Enter Number  \n");
    scanf(" %d",&num);
    org=num;
    while (num!=0)
    {
        temp=num%10;
        new=(new*10)+temp;
        num=num/10;
    }
    printf("Num : %d \nNew : %d\n",org,new);
    if (new==org)
    {
        printf("The number is Palindrome");
    }
    else
    {
        printf("The number is not a Palindrome");
    }
    return 0;
}