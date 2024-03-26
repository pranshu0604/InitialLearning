/*
Encoded by Pranshu
Dated 21 August 2023, 04:56PM
Subject : Writing and Reading a large File at once
Objective : File I/O
*/

#include<iostream>
#include<fstream>
//#include<cmath>
using namespace std;

int main()
{
    ofstream out("largefile.txt");
    cout<<"Press Enter key to write"<<endl;
    char ch='y';
    getchar();
    while (ch=='y')
    {
        string str;
        cout<<"Go ahead"<<endl;
        getline(cin,str);
        out<<str<<"\n";
        cout<<"Wanna write more? yes-y, no-n "<<endl;
        cin>>ch;
        getchar();
    }
    out.close();

    cout<<"Reading file now"<<endl;
    ifstream in("largefile.txt");
    while (in.eof()==0)
    {
        string str;
        getline(in,str);
        cout<<str<<endl;
    }
    in.close();
    cout<<"All done, Ta-da !";      
    return 0;
}