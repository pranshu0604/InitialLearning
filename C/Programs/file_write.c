#include <stdio.h>
// #include <stdlib.h>
#include <string.h>
//#include <unistd.h>
//#include <time.h>

int main()
{
    FILE *ptr=NULL;
    ptr=fopen("testfilewrite.txt","w");
    char str[]="This_is_Pranshu\n";
    fprintf(ptr,"%s",str);    
    fclose(ptr);
    return 0;
}