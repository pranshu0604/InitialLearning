#include <stdio.h>

/*Encoded by Pranshu
Dated 12 June 2023
Objective Do while Loops*/

int main(int argc, char const *argv[])
{
    int num, index;            //Declaring starting and ending numbers
    index=1;
    printf("Enter the number of hehes you want\n");
    scanf("%d", &num);
    do
    {
        printf("Hehe %d \n", index);
        index+=1;
    } while (index<=num);
    
    return 0;
}
