/*
Encoded by Pranshu
Dated July 27, 2023 02:57 PM
Subject : Distance Between two Cartesian points
Objective : Parameterized constructors
*/

#include <iostream>
#include <cmath>
using namespace std;

class point;

double dist(point, point);

class point{
    int x;
    int y;

    public: 
    point(){
        int a,b;
        cout<<"Enter Point :"<<endl;
        cin>>a;
        cin>>b;
        x=a;
        y=b;
    }
    friend double dist(point,point);
};

double dist(point a, point b){
    double ans = sqrt((pow((b.x-a.x),2))+(pow((b.y-a.y),2)));
    return ans;
}

int main()
{
    point p1;
    point p2;
    double distance = dist(p1,p2);
    cout<<"The distance between the two points is "<<distance;
    return 0;
}