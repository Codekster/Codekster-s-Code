#include<iostream>
#include<math.h>
using namespace std;

bool isAutomorphic(int number){
    string str=to_string(number);
    int length=str.length();

    length=pow(10,length);

    int sqr=number*number;
    sqr=sqr%length;

    if(sqr==number){
        return true;
    }

    else{
        return false;
    }
}

int main(){
    int number;
    cout<<"enter any number";
    cin>>number;

    bool result=isAutomorphic(number);
    cout<<result;

   

    
}