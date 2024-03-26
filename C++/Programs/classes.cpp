/*
Encoded by Pranshu
Dated 23 July 2023, 11:37 PM
Subject : Classes
Objective : Object Oriented Programming
Has a deliberate error(commented)
*/
#include<iostream>
using namespace std;

class Pranshu                           //Declaring Class
{
    private:
        int a,b,c;
    public:
        int d,e;
    void setdataglobal();
    void setdatalocal()
    {
        cout<<"Enter a : ";
        cin>>a;
        cout<<"Enter b : ";
        cin>>b;
    }
};

void Pranshu::setdataglobal()
{
    cout<<"Enter d : ";
    cin>>d;
}

int main()
{
    Pranshu pranshu;                   // Declaring object to work on
    pranshu.setdatalocal();
    pranshu.setdataglobal();
    cout<<"Enter e : ";
    cin>>pranshu.e;
    cout<<"Enter c : ";
    // cin>>pranshu.c;     Uncomment during run
    return 0;
}