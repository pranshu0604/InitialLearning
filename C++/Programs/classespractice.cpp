/*
Encoded by Pranshu
Dated July 25, 2023 4:20 PM
Subject : Shop Item Details
Objective : Classes
*/

#include <iostream>
#include <string>
using namespace std;

class Dukaan
{
    int ch;
    int itemno[10];
    string itemname[10];
    int itemprice[10];

public:
 
    void setdetails(){
        cout<<"Enter the number of items you want to add : (should be less than 10) ";
        cin>>ch;
        for (int i = 0; i < ch ; i++)
        {
            cout<<"Enter choice number "<<i+1<<"'s Serial Number : "<<endl;
            cin>>itemno[i];
            cout<<"Enter choice number "<<i+1<<"'s Name : "<<endl;
            cin>>itemname[i];
            cout<<"Enter choice number "<<i+1<<"'s Price : "<<endl;
            cin>>itemprice[i];
            cout<<endl;
        }
        
    }

    void showdetails(){
        for (int i = 0; i < ch; i++)
        {
            cout<<"The serial number of product "<<i+1<<" is "<<itemno[i]<<endl;
            cout<<"The name of product "<<i+1<<" is "<<itemname[i]<<endl;
            cout<<"The price of product "<<i+1<<" is "<<itemprice[i]<<endl<<endl;
        }

        cout<<"Thank You ! :)";
        
    }
    
} ;

int main()
{
    Dukaan apnidukaan;
    apnidukaan.setdetails();
    apnidukaan.showdetails();
    return 0;
}