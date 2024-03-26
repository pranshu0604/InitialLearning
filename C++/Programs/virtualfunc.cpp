/*
Encoded by Pranshu
Dated 17 August, 2023 05:11 PM
Subject : Virtual Functions
Objective : Same as subject
*/

#include<iostream>
using namespace std;

class base{
    public :
    int a;
    base(int x=1){
        a=x;
    }
    virtual void display(){
        cout<<"The variable a is "<<a<<endl;
    }
};

class derived : public base{
    int b;
    public :
    derived(int y){
        b=y;
    }
    void display(){
        cout<<"The variable a is "<<a<<" and the variable b is "<<b<<endl;
    }
};

int main(){
    base *ptr;
    derived der(2);
    ptr = &der;
    ptr -> display();
    return 0;
}