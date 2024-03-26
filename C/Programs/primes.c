#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//#include <unistd.h>
//#include <time.h>
//#include <math.h>
int main()
{
    int temp;
    printf("All the prime numbers from 1 to 100 are : \n");
    printf("2, ");
    for (int i = 3; i <= 100; i++)
    {
        int j=2;
        while (j<i)
        {
            temp=(i%j);
            if (temp==0)
            {
                break;
            }
            j++;
        }
        if (temp!=0)
        {
            printf("%d, ",i);
        }        
    }
    
    return 0;
}