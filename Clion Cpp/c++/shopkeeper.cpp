#include<bits/stdc++.h>
using namespace std;
int main(){
    int amount;
    cout<<"enter your ourchasing amount"<<endl;
    cin>>amount;
    cout<<"Discount :"<<0.02*amount<<endl;
    cout<<"Final Bill : "<<amount-(amount*0.02);
}