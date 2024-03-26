/*
Encoded by Pranshu
Dated August 29, 2023 05:58 AM
Subject : Lists In C++
Objective : STL (Standard Template Library)
*/

#include<iostream>
#include<list>
//#include<fstream>
//#include<cmath>
using namespace std;

void display(list <int> l){
    for (list<int>::iterator iter = l.begin(); iter != l.end(); iter++)
    {
        cout<<(*iter)<<"\t";
    }
    cout<<endl<<endl;    
}

int main()
{
    list <int> PransList;
    PransList.push_back(2);
    PransList.push_back(1);
    PransList.push_back(4);
    PransList.push_back(3);
    PransList.push_front(0);
    cout<<"Pranslist :\n";
    display(PransList);

    cout<<"After removing 3: \n";
    PransList.remove(3);
    display(PransList);

    cout<<"After sorting:\n";
    PransList.sort();
    display(PransList);

    cout<<"After merging list2: \n";
    list <int> list2;
    list2.push_back(67);
    list2.push_back(71);
    list2.push_back(671);

    PransList.merge(list2);
    display(PransList);

    cout<<"After reversing:\n";
    PransList.reverse();
    display(PransList);

    return 0;
}