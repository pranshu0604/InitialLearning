/*
Encoded by Pranshu
Dated August 28, 2023 09:51 PM
Subject : Number Pattern
Objective : Logic Building
*/

#include <iostream>
#include <string>
// #include <iomanip>
// #include<fstream>
// #include<cmath>
using namespace std;

int main()
{
    int num;
    cout << "Enter number of lines you want"<<endl;
    cin >> num;
    string arr[num];
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (((i + j) % 2) == 0)
            {
                arr[i-1].append("1");
            }
            else
            {
                arr[i-1].append("0");
            }
        }
    }
    cout << "Displaying :" << endl;

    for (int i = 1; i <= num; i++)
    {
        cout << arr[i-1] << endl;
    }
    return 0;
}