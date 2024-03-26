/*
Encoded by Pranshu
Dated August 02 , 2023 01:00 PM
Subject : Multiple Inheritance
Objective : Same as Subject
*/

#include <iostream>
using namespace std;

class Base1
{
protected:
    int int1;

public:
    void setint1(int x)
    {
        int1 = x;
    }
};

class Base2
{
protected:
    int int2;

public:
    void setint2(int x)
    {
        int2 = x;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "First Number : " << int1 << endl;
        cout << "Second Number : " << int2 << endl;
        cout << "Sum : " << int1 + int2 << endl;
    }
};

int main()
{
    cout << "Hello !" << endl;
    Derived d1;
    d1.setint1(1);
    d1.setint2(2);
    d1.show();
    return 0;
}