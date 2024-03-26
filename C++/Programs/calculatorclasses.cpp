/*
Encoded by Pranshu
Dated 02 August 2023, 01:18 PM
Subject : Simple, Scientific and Hybrid Calculator using classes
Objective : Multiple Inheritance
*/

#include <iostream>
#include <cmath>

using namespace std;

typedef class PlainCalc
{
protected:
    float a;
    float b;

public:
    void setints()
    {
        cout << "Enter the numbers : " << endl;
        cin >> a >> b;
    }

    void showints()
    {
        cout << "The numbers are " << a << " and " << b << endl;
    }

    void sum()
    {
        showints();
        cout << "The sum a+b is : " << a + b << endl;
    }

    void diff()
    {
        showints();
        cout << "The difference a-b is : " << a - b << endl;
    }

    void mul()
    {
        showints();
        cout << "The difference axb is : " << a * b << endl;
    }

    void div()
    {
        showints();
        cout << "The quotient b/a is : " << b / a << endl;
    }

} pc;

typedef class SciCalc
{
protected:
    int c;

public:
    void setint()
    {
        cout << "Enter the number : ";
        cin >> c;
    }

    void showint()
    {
        cout << "The number is " << c << endl;
    }

    void power()
    {
        showint();
        int d;
        cout << "Enter the power that you want your number to be raised." << endl;
        cin >> d;
        cout << c << " raised to " << d << " is " << pow(c, d) << endl;
    }

    void sqroot()
    {
        showint();
        cout << "The square root is " << sqrt(c) << endl;
    }

    void psin()
    {
        showint();
        cout << "The sine of the number is " << sin(c) << endl;
    }

    void pcos()
    {
        showint();
        cout << "The cosine of the number is " << cos(c) << endl;
    }

    void ptan()
    {
        showint();
        cout << "The tangent of the number is " << tan(c) << endl;
    }

    void ploge()
    {
        showint();
        cout << "The natural logarithm of the number is " << log(c) << endl;
    }

    void plog10()
    {
        showint();
        cout << "The logarithm of the number with base 10 is " << log10(c) << endl;
    }

    void pexp()
    {
        showint();
        cout << "The exponent is " << exp(c) << endl;
    }

} sc;

typedef class Hcalc : public PlainCalc, public SciCalc
{
} hc;

int main()
{
    hc hc1;
    int ch;
    cout << "Enter 1 for plain claculations for 2 numbers" << endl
         << "Enter 2 for scientific calculations for a single number" << endl;
    cin >> ch;

    if (ch == 1)
    {
        hc1.setints();
        int ch2;
        cout << "Press 1 for addition " << endl;
        cout << "Press 2 for subtraction " << endl;
        cout << "Press 3 for multiply " << endl;
        cout << "Press 4 for divide " << endl;
        cin >> ch2;

        if (ch2 == 1)
        {
            hc1.sum();
        }
        if (ch2 == 2)
        {
            hc1.diff();
        }
        if (ch2 == 3)
        {
            hc1.mul();
        }
        if (ch2 == 4)
        {
            hc1.div();
        }
    }

    else if (ch == 2)
    {
        hc1.setint();
        int ch2;
        cout << "Press 1 for powers" << endl;
        cout << "Press 2 for square root" << endl;
        cout << "Press 3 for exponent of e" << endl;
        cout << "Press 4 for natural logarithm" << endl;
        cout << "Press 5 for logarithm of base 10" << endl;
        cout << "Press 6 for sine" << endl;
        cout << "Press 7 for cosine" << endl;
        cout << "Press 8 for tangent" << endl;
        cin >> ch2;
        if (ch2 == 1)
        {
            hc1.power();
        }
        if (ch2 == 2)
        {
            hc1.sqroot();
        }
        if (ch2 == 3)
        {
            hc1.pexp();
        }
        if (ch2 == 4)
        {
            hc1.ploge();
        }
        if (ch2 == 5)
        {
            hc1.plog10();
        }
        if (ch2 == 6)
        {
            hc1.psin();
        }
        if (ch2 == 7)
        {
            hc1.pcos();
        }
        if (ch2 == 8)
        {
            hc1.ptan();
        }
    }

    return 0;
}