/*
Encoded by Pranshu
Dated July 29 2023, 07:18 PM
Subject : Destroying an object
Objective : Destructors
*/

#include <iostream>
using namespace std;

class Pranshu
{
    int a;
    int b;

public:
    Pranshu(int x, int y)
    {
        a = x;
        b = y;
    }

    ~Pranshu() { cout << "Destructor called" << endl; } //<<--Destructor (could also leave blank)
};

int main()
{

    {
        Pranshu num(1, 3);
    }

    return 0;
}