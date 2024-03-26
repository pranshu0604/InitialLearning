#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <unistd.h>
// #include <time.h>
// #include <math.h>

void perfnums(int llim, int ulim)
{
    printf("All the perfect numbers from %d to %d are :\n",llim,ulim);
    for (int i = llim; i <= ulim; i++)
    {
        int sum=0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum==i)
        {
            printf("%d\n",i);
        }
        
    }
}
int main()
{
    int llim,ulim;
    printf("Enter lower limit : ");
    scanf(" %d",&llim);
    printf("Enter upper limit: ");
    scanf(" %d",&ulim);
    perfnums(llim,ulim);
    return 0;
}