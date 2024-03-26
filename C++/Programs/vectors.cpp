/*
Encoded by Pranshu
Dated August 28, 2023 01:28 PM
Subject : Vectors
Objective : STL (Standard Template Library)
*/

#include<iostream>
#include<vector>
//#include<fstream>
//#include<cmath>
using namespace std;

void display(vector<int> &v){
    cout<<"Here is the Vector :"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"\t";
    }
    
}

int main()
{
    vector <int> PransVector;
    int size,num;
    cout<<"How many number do you want to enter in the vector PransVector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the "<<i+1<<"th number"<<endl;
        cin>>num;
        PransVector.push_back(num);
    }
    cout<<"Status : Success!\n";

    cout<<"At which position do you want to insert another number?\n";
    
    int pos;
    cin>>pos;
    
    cout<<"What number do you want to add?\n";
    cin>>num;

    std::vector<int>::iterator iter = PransVector.begin();

    PransVector.insert(iter-1+pos,num);

    display(PransVector);
    cout<<endl;

    cout<<"Deleting last element\n";

    PransVector.pop_back();

    display(PransVector);

    return 0;
}