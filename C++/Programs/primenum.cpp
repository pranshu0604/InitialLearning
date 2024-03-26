/*
Encoded by Pranshu
Dated August 28, 2023 09:52 PM
Subject : Checking Prime Number
Objective : Logic Building
*/

#include <iostream>
// #include<fstream>
// #include<cmath>
using namespace std;

void chkprime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i != 0)
        {
            continue;
        }

        else
        {
            cout << "The number is composite";
            return;
        }
    }

    cout << "The number is prime";
    return;
}

int main()
{
    cout << "Enter num:\t";
    int num;
    cin >> num;
    chkprime(num);
    return 0;
}