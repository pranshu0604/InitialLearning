#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//#include <unistd.h>
//#include <time.h>
//#include <math.h>
int main()
{
    int num,temp,new=0;
    printf("Enter number : ");
    scanf(" %d",&num);
    while (num!=0)
    {
        temp=num%10;
        new=(new*10)+temp;
        num=num/10;
    }
    printf("The new number is : %d",new);
    return 0;
}