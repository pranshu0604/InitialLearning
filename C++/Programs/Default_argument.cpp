/*
Encoded by Pranshu
Dated 20 July, 2023 08:54 PM
Subject: Interest calculator based on type of user
Objective : Default Argument
*/

#include <iostream>
using namespace std;
int amount(int principal, float factor=1.06)
{
    int amount=principal*factor;
    return amount;
}
int main()
{
    int money;
    cout<<"How much are you investing?"<<endl;
    cin>>money;
    cout<<"You get "<<amount(money)<<" Rs after a year"<<endl;
    cout<<"For VIP account, you get "<<amount(money,1.10)<<" Rs after an year"<<endl;
    return 0;
}