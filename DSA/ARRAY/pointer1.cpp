#include<iostream>
using namespace std;

void fun1(int a){
    cout<<"adress of a in fun1 "<<&a<<endl;
}

void fun2(int* a){
    cout<<"adress of a in fun2 "<<a<<endl;
}

int main(){
    // int a=55;
    // cout<<"address of 'a' in main "<<&a<<endl;
    // fun1(a);

    // int *ptr=&a;
    // fun2(&a);
    // fun2(ptr);

    int arr[]={1,2,3,4,5};

    int* ptr=arr;
    ptr[3]=44;

    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<endl;
    }

}