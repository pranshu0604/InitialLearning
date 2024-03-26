/*
Encoded by Pranshu
Dated 05 August 2023, 09:37 PM
Subject : Constructors in Derived Classes
Objective : Same as Object
*/

#include <iostream>
using namespace std;

class base1
{
    protected:
    int a;

public:
    base1(int x)
    {
        a = x;
        cout << "Constructor for \"Base 1\" called" << endl;
    }
};

class base2
{
    protected:
    int b;

public:
    base2(int y)
    {
        b = y;
        cout << "Constructor for \"Base 2\" called" << endl;
    }
};

class derived : public base1, public base2
{
    int c;

public:
    derived(int x, int y, int z) : base1(x), base2(y)
    {
        c = z;
        cout << "Constructor for \"derived\" called" << endl;
    }
    void showdata(){
        cout<<"The value of a, b and c are "<<a<<", "<<b<<" and "<<c<<endl;
    }
};

int main()
{
    derived d1(1, 2, 3);
    d1.showdata();
    return 0;
}