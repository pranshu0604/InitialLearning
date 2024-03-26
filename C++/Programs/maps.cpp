/*
Encoded by Pranshu
Dated August 29, 2023 12:25 PM
Subject : Maps (Dictionaries)
Objective : STL (Standard Template Library)
*/

#include<iostream>
//#include<fstream>
//#include<cmath>
//#include<iomanip>
//#include<string>
//#include<vector>
//#include<list>
#include<map>
using namespace std;

void display(map <string,int> m){
    cout<<"Displaying:\n";
    for (map <string,int>::iterator i = m.begin(); i != m.end(); i++)
    {
        cout<<(*i).first<<" : "<<(*i).second<<endl;
    }
}

int main()
{
    map <string,int> PransMap;
    PransMap["Pranshu"]=100;
    PransMap["Vaishnavi"]=99;
    PransMap["Diya"]=82;
    PransMap["Nimmi"]=98;
    PransMap["Suyash"]=56;
    PransMap["Sashwat"]=89;

    display(PransMap);
    cout<<"More Commands in link attached to Notes.txt";
    return 0;
}