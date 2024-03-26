/*
Encoded by Pranshu
Dated 29 July 2023, 08:43 PM
Subject : Basic Inheritance Syntaxes
Objective : Same as Subject
*/

#include<iostream>
using namespace std;

class Pranshu1 {
    public:
    int id;
    Pranshu1(int inpId){
        id=inpId;
    }
    Pranshu1(){}           //<<-- Should be present here for the sake of the derived function too.
};

class Pranshu2 : public Pranshu1 {
    public:
    Pranshu2(int inpId =2){
        id=inpId;
    }
    void getdata(){
        cout<<"The ID is "<<id<<endl;
    }
};

int main(){
    cout<<"Enter value : "<<endl;
    int temp;
    cin>>temp;
    Pranshu2 p1,p2(temp);
    p1.getdata();
    p2.getdata();
    return 0;
}