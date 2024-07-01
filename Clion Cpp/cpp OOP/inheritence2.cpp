#include<iostream>
using namespace std;

class car{
    public:
    string carModel;
    int price;

    void horn(){
        cout<<"car class horn function called"<<endl;
    }



};

class swift: public car{
    public:
    void run(){
        horn();
        cout<<"swift class run method"<<endl;
    }
};

int main(){
    swift obj;
    // obj.horn();
    obj.run();

}
