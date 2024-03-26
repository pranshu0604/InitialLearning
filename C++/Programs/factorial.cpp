/*
Encoded by Pranshu
Dated July 20,2023 09:11 PM
Subject : Factorial of a number
Objective : Recursive Functions
*/

#include<iostream>
using namespace std;

// Declaring Functions
int factorial(int a)
{
    int ans=0;
    if (a==0)
    {
        ans=1;
    }

    else
    {
        ans=a*factorial(a-1);
    }

    return ans;
}

int main()
{
    int num;
    cout<<"Enter the number that you want the factorial of : "<<endl;
    cin>>num;
    cout<<"The Factorial is : "<<factorial(num)<<endl;
    return 0;
}