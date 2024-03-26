/*
Encoded by Pranshu
Dated 07 July 2023, 4:03 PM
Subject : Complex number Objects
Objective : constructors with default arguments
*/

#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    complex(int x = 0, int y = 0)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "The Complex number is " << a << " + " << b << "i." << endl;
    }
};

int main()
{
    char ch;
    cout << "Type \"y\" for providing value yourself or any other character for default value." << endl;
    cin >> ch;

    if (ch == 'y')
    {
        cout << "Enter real and imaginary parts." << endl;
        int x, y;
        cin >> x;
        cin >> y;
        complex c1(x,y);
        c1.display();
        return 0;
    }

    complex c1;
    c1.display();

    return 0;
}