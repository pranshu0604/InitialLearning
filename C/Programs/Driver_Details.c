/*
Encoded by Pranshu
Dated June 29,2023 , Thursday
Subject: Driver Details of a Travel Agency
Objective: Structures
All issues Fixed
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct DD
{
    char dname[39];
    char dlno[12];
    char route[1024];
    int kmst;
};

int main()
{
    struct DD DD1, DD2, DD3;
    printf("Enter the details of First Driver \n");
    printf("Enter driver\'s name\n");
    scanf(" %s", &DD1.dname);
    printf("Enter driver\'s License Number \n");
    scanf(" %s", &DD1.dlno);
    printf("Enter driver\'s Route \n");
    scanf(" %s", &DD1.route);
    printf("Enter Kilometers Travelled by the Driver \n");
    scanf(" %d", &DD1.kmst);
    printf("Enter the details of Second Driver \n");
    printf("Enter driver\'s name\n");
    scanf(" %s", &DD2.dname);
    printf("Enter driver\'s License Number \n");
    scanf(" %s", &DD2.dlno);
    printf("Enter driver\'s Route \n");
    scanf(" %s", &DD2.route);
    printf("Enter Kilometers Travelled by the Driver \n");
    scanf(" %d", &DD2.kmst);
    printf("Enter the details of Third Driver \n");
    printf("Enter driver\'s name\n");
    scanf(" %s", &DD3.dname);
    printf("Enter driver\'s License Number \n");
    scanf(" %s", &DD3.dlno);
    printf("Enter driver\'s Route \n");
    scanf(" %s", &DD3.route);
    printf("Enter Kilometers Travelled by the Driver \n");
    scanf(" %d", &DD3.kmst);

    printf("\n");
    printf("The Details of the First Driver are \n");
    printf("The name of the Driver is %s \n", DD1.dname);
    printf("The License Number of the Driver is %s\n", DD1.dlno);
    printf("The Route of the Driver is %s \n", DD1.route);
    printf("The Kilometers travelled by the Driver are %d\n\n", DD1.kmst);
    printf("The Details of the Second Driver are \n");
    printf("The name of the Driver is %s \n", DD2.dname);
    printf("The License Number of the Driver is %s\n", DD2.dlno);
    printf("The Route of the Driver is %s \n", DD2.route);
    printf("The Kilometers travelled by the Driver are %d", DD2.kmst);
    printf("Details of the Third Driver are \n\n");
    printf("The name of the Driver is %s \n", DD3.dname);
    printf("The License Number of the Driver is %s\n", DD3.dlno);
    printf("The Route of the Driver is %s \n", DD3.route);
    printf("The Kilometers travelled by the Driver are %d\n\n", DD3.kmst);
    printf("Thankyou! \n");

    return 0;
}