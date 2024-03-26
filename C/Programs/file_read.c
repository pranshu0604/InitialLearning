/*
Encoded by Pranshu
Dated July 10, 2023, Monday
Subject : Read a txt File
Objective : File I/O
*/

#include <stdio.h>
// #include <stdlib.h>
#include <string.h>
//#include <unistd.h>
//#include <time.h>

int main()
{
    FILE *ptr=NULL;
    char str[50];
    ptr=fopen("testfileread.txt","r");
    fscanf(ptr,"%s",str);
    printf("%s",str);
    fclose(ptr);
    return 0;
}