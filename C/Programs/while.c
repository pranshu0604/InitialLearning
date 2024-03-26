#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, index;
    index=1;
    printf("Number again \n");
    scanf("%d", &num);
    while (index<=num)
    {
        printf("Hehe %d \n", index);
        index+=1;
    }
    
    return 0;
}