/*
Encoded by Pranshu
Dated June 19,2023 Monday
Objective User Defined Structures
Subject: Printing all the details of a given student*/
struct studs
{
    int rno;
    char name[20];
    float marks;
};

#include <stdio.h>
#include <string.h>
int main()
{
    struct studs fst, sec;
    fst.rno=1;
    strcpy(fst.name,"Pranshu");
    fst.marks=81;
    sec.rno=2;
    strcpy(sec.name,"Harry");
    sec.marks=75;
    printf("The Roll Number of First Student is %d \n",fst.rno);
    printf("The Name of First Student is %s \n",fst.name);
    printf("The Marks of First Student is %f \n",fst.marks);
    printf("The Roll Number of Second Student is %d \n",sec.rno);
    printf("The Name of Second Student is %s \n",sec.name);
    printf("The Marks of Second Student is %f \n",sec.marks);
    return 0;
}