#include<iostream>
using namespace std;
template <typename tt> class MyClass{
    tt data;
    //this is a test scenario
    
    public:
    void setData(){
        
        data.getDetails();
        cout<<"set data is called"<<endl;
        cout<<"this is the change directly in the repo" <<endl
        
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
