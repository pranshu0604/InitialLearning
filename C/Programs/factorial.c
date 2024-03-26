#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//#include <unistd.h>
//#include <time.h>
//#include <math.h>
int main()
{
    int num,ans=1;
    printf("Enter Number \n");
    scanf(" %d",&num);
    for (int i = 1 ; i <= num; i++)
    {
        ans=ans*i;
    }
    printf("The Factorial of %d is %d\n",num,ans);
    return 0;
}