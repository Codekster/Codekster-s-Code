#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter your numbers"<<endl;
    cin>>a>>b>>c;

    //evaluation using conditional operator

    int d;
    a>b?(a>c? d=a: d=c):(b>c?d=b:b=c);
    cout<<"greater number is= "<<d<<endl;

    //evaluation using if else
    
    if(a>b){
        if(a>c){
            cout<<"maximum is= "<<a<<endl;
        }
        else{
            cout<<"maximum is= "<<c<<endl;
        }
    }

    else if(b>a){
        if(b>c){
            cout<<"max is= "<<b<<endl;
        }
        else{
            cout<<"max is= "<<c<<endl;
        }
    }



}