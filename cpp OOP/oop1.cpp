#include<iostream>
using namespace std;

class car{
    string carname,color;
    int price;

    public:
    void setdata(string s,string s1, int a){
        this->carname=s;
        this->color=s1;
        this->price=a;

    }

    void display(){
        cout<<"Name of the car is: "<<carname<<endl;
        cout<<"Color of the car is: "<<color<<endl;
        cout<<"Price of the car is: "<<price<<endl;
    }
    
};

int main(){
    car suzuki,mahindra;

    suzuki.setdata("Swift","white",800000);
    mahindra.setdata("ScorpioN","black", 2200000);

    suzuki.display();
    mahindra.display();

}