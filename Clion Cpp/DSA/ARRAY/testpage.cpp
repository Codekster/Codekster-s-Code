#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter any number"<<endl;
    cin>>num;
    int great=num%10;
    num=num/10;

   

    if(num%10>great){
        great=num%10;
       
    }

     num=num/10;

    if(num>great){
        great=num;
    }
    // while(num){
    //    int x=num%10;
    //    if(x>great){
    //     great=x;
    //    }
    //    num=num/10;
    // }

    cout<<"greater digit is: "<<great<<endl;

}