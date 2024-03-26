#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//#include <unistd.h>
//#include <time.h>
//#include <math.h>
int main()
{
    int num,temp,sum=0;
    printf("Enter number \n");
    scanf(" %d",&num);
    while (num!=0)
    {
        temp=num%10;
        sum=sum+temp;
        num=num/10;
    }
    printf("The sum is %d",sum);
    return 0;
}