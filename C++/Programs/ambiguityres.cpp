/*
Encoded by Pranshu
Dated August 04, 2023 09:33 PM
Subject : Amiguity resolution in Multiple Inheritance
Objective : Same as subject
*/

#include<iostream>
using namespace std;

class Base1{
    public:
    void greet(){
    cout<<"Hello World"<<endl;
    }
};

class Base2{
    public:
    void greet(){
        cout<<"Hello Pranshu"<<endl;
    }
};

class Derived : public Base1, public Base2{
    public:
        void greet(){                  //<<-- Ambiguity resolution, will throw error if this is absent.
            Base1::greet();
        }
};

int main()
{
    Derived d1;
    d1.greet();
    return 0;
}