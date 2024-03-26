/*
Encoded by Pranshu
Dated August 06, 2023 11:38 PM
Subject : this Pointer
Objective : Same as Subject
*/

#include<iostream>
using namespace std;

class Pranshu{
    int a;
    public :
        void setdata(int a){
            this->a=a;
        }
        void display(){
            cout<<"Value : "<<a<<endl;
        }
};

int main()
{
    Pranshu p1;
    p1.setdata(3);
    p1.display();
    return 0;
}