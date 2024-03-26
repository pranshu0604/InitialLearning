/*
Encoded by Pranshu
Dated : August 25, 2023 06:40 PM
Subject : Function templates
Objective : Same as subject
*/

#include<iostream>
//#include<fstream>
//#include<cmath>
using namespace std;

template<class T1, class T2>
float funcAvg(T1 a, T2 b){
    float ans;
    ans= (a+b)/2.0;
    return ans;
}

int main()
{
    int a=2;
    float b=4.3;
    cout<<"The average is "<<funcAvg(a,b); //Did not need to tell datatypes explicitly while invoking
    return 0;
}