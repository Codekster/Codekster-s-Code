#include<iostream>
using namespace std;
template <typename tt> class MyClass{
    tt data;

    public:
    void setData(){
        
        data.getDetails();
        
    }

    void print(){
        data.print();
    }
};

class thing{
    int id;
    string name;

    public:

    void getDetails(){
        cout<<"enter id: ";
        cin>>id;
        cout<<"enter name: ";
        cin>>name;
    }

    void print(){
        cout<<"id of the product is: "<<id<<endl;
        cout<<"name of the product is: "<<name<<endl;
    }
};


int main(){
    MyClass <thing>obj;
    obj.setData();
    obj.print();
}