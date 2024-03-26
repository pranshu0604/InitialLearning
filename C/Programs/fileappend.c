#include <stdio.h>
// #include <stdlib.h>
#include <string.h>
//#include <unistd.h>
//#include <time.h>
int main()
{
    FILE *ptr=NULL;
    ptr=fopen("testfileappend.txt","a");
    char str[]="Append_Successful";
    fprintf(ptr,"%s",str);
    fclose(ptr);
    return 0;
}