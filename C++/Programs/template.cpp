/*
Encoded by Pranshu
Dated August 25, 2023
Subject : Templates
Objective : Same as Subject
*/

#include<iostream>
//#include<fstream>
//#include<cmath>
using namespace std;

template <class T1, class T2>

class complex{
    T1 a;
    T2 b;

    public:
    complex(T1 x, T2 y=char){     //T2 has a default argument, just like functions, and can be left blank
        a=x;
        b=y;
        cout<<"The complex number is "<<a<<" + "<<b<<"i."<<endl;
    }
};


int main()
{
    complex <float, int> c1(3.2,6);
    return 0;
}