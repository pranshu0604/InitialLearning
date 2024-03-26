/*
Encoded by Pranshu
Dated 20 July,2023 09:22 PM
Subject : nth number of the Fibonacci Series
Objective : Recursive Functions
*/
#include<iostream>
using namespace std;

// Declaring Functions

int fib(int a)
{
    int ans=0;
    if ((a==1)||(a==2))
    {
        ans=1;
    }
    else
    {
        ans=fib(a-1)+fib(a-2);
    }
    return ans;
}

int main()
{
    int num;
    cout<<"Enter the value of n : "<<endl;
    cin>>num;
    cout<<"The value of the "<<num<<"th term of the Fibonacci series is "<<fib(num)<<endl;
    return 0;
}