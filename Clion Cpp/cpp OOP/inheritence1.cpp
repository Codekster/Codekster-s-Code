#include<iostream>
using namespace std;

class shape
{   public:
    virtual void area(){
        cout<<"employee class detail function called"<<endl;
    }

   
};

class circle:public shape{
    public:

    virtual void area(){
        double r;
        cout<<"enter radius of circle"<<endl;
        cin>>r;
        cout<<"are of circle is: "<<3.14*r*r<<endl;
    }

 
   


};


class rectangle: public shape{
    public:

    virtual void area(){
        double length, breadth;
        cout<<"eneter length of rectange: ";
        cin>>length;
        cout<<endl;
        cout<<"enter width of rectange: ";
        cin>>breadth;
        cout<<"area of rectangle is: "<<length*breadth<<endl;
    }

 
};


int main(){
    shape *obj;
    obj=new circle;
    obj->area();
    

    obj= new rectangle;
    obj->area();

}