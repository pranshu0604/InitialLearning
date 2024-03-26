/*
Encoded by Pranshu
Dated July 14,2023, Friday, 12:36 PM
Subject: Finding area of Circle with radius as the distance between two points given by the user.
Objective: Function Pointers
*/

#include <stdio.h>
#include <math.h>
#define pi 3.14
// #include <stdlib.h>
// #include <string.h>
// #include <unistd.h>
// #include <time.h>

// Declaring Functions

float edist(float x1, float y1, float x2, float y2)
{
    float dist = sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));
    return dist;
}

float areaofcircle(float (*ptr)(float, float,float, float))
{
    float x1,x2,y1,y2,rad,area;
    printf("Enter Coordinates of First point \n");  // Give space between the two values
    scanf(" %f",&x1);
    scanf(" %f",&y1);
    printf("Enter Coordinates of Second point \n");
    scanf(" %f",&x2);
    scanf(" %f",&y2);
    rad=ptr(x1,y1,x2,y2);
    area=pi*pow(rad,2);
    return area;
}

int main()
{
    float (*ptr)(float,float,float,float);
    ptr=&edist;
    float ans;
    ans=areaofcircle(ptr);
    printf("The area of the circle is %f\n",ans);
    return 0;
}