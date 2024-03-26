/*
Encoded by Pranshu
Dated 31 July 2023, 12:53 PM
Subject : Protected Members
Objective : Same as Subject
*/

#include<iostream>
using namespace std;

typedef class Pranshu_base{
    int position;
    protected:
    string wants;
    public:
    string name;
    void setwants(){wants="Enrichment of Higher Self";}
    void setname(){name="Pranshu";}
    void setposition(){position=01;}
} pb;

typedef class Pranshu_Derived : public Pranshu_base{
    public:
    void dispwants(){cout<<"The wants are "<<wants<<endl;}
    void dispname(){cout<<"The name is "<<name<<endl;}   //(will work, protected inheritance)
    //void dispposition(){cout<<"The position is "<<position<<endl;}  (won't work,private)
} pd;

int main()
{
    pd pd1;
    pd1.setname();
    pd1.setwants();
    pd1.setposition();     //will work, discussed in notes
    pd1.dispname();
    //pd1.dispposition();   //won't work, discussed in notes
    cout<<"Cannot display position"<<endl;
    pd1.dispwants();
    return 0;
}