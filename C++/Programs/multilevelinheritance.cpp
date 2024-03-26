/*
Encoded by Pranshu
Dated July 31, 2023 01:53 PM
Subject : Marks Distribution
Objective : Multi-Level Inheritance
*/

#include <iostream>
#include <cstdio>
using namespace std;

class Student
{
public:
    int rno;
};

class Exam : public Student
{
public:
    int marks;
};

class Result : public Exam
{
public:
    float GPA;
    void setrno(int x) { rno = x; }
    void setmarks() { marks = 95; }
    void setGPA() { GPA = (float)marks / 10; }
    void disprno() { cout << "The Enrollment number of the student is " << rno << endl; }
    void dispresult()
    {
        cout << "(C++) The Final GPA of the Student is " << GPA << endl; 
        printf("(C) The Final result of the student is %f\n",GPA);
    }

};

int main()
{
    cout<<"Hello"<<endl;
    Result r1;
    r1.setrno(1);
    r1.setmarks();
    r1.setGPA();
    r1.disprno();
    r1.dispresult();
    return 0;
}