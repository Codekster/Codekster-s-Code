// destructor= used to deallocate the memory;
// has no parameter
// no return type
// uses ~ sign
/* for statically creayed object the destructor is called while for
dynamically creayed object you will have to manually call the constructor */

#include<bits/stdc++.h>
using namespace std;
class boy{
	public:
   static int timeOfCreation;//static data member
	int age;
	private:
	string Name;
	public:
    boy(){
        cout<<"constructor called"<<endl;
    }
	void inputName(){
		cin>>Name;
	}
	void outputName( string p){
		if(p=="Abhishek"){
		cout<<Name<<endl;
		}
	}

    ~boy(){
        cout<<"Destructor called"<<endl;
    }
	static int func(){ // static function can only access the static data member of a class
		return timeOfCreation; // they cant use 'this' keyword bczzz they dont have acess to objects;
	}
};//'this' keyword is used as pointer to current objects;

int boy::timeOfCreation= 23082004; //declaration of static member


int main(){
    //statically
  boy a;
	

    //dynamically
    boy *b=new boy;
    delete b;
	cout<<boy::timeOfCreation<<endl;

	cout<<boy::func()<<endl;

	




}