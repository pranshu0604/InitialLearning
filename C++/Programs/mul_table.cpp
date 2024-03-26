/*
Encoded by Pranshu
Dated July 17, 2023 11:47 PM
Subject : Printing Multiplication Table of a Number that the user enters
Objective : For loops
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number that you want a multiplication table of"<<endl;
    cin>>num;
    cout<<endl;
    for (int i = 1; i <= 10; i++)
    {
        cout<<num<<"x"<<i<<"="<<num*i<<endl;
    }
    
    return 0;
}
