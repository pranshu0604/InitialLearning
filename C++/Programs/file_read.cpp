/*
Encoded by Pranshu
Dated August 17, 2023 08:05 PM
Subject : File Reading
Objective : Same as Subject , File I/O
Has problems as of now
*/

#include<iostream>
#include<fstream>
// #include<string>
// #include<cmath>
using namespace std;

int main()
{
    // string str1;
    string str2;
    ifstream fileout("fileread.txt");
    // fileout>>str1;
    getline(fileout, str2);
    // cout<<str1<<endl;
    cout<<str2;
    fileout.close();
    return 0;
}