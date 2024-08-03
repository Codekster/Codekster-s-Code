#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class boy{
	public:
	int age;
	private:
	string Name;
	public:
	void inputName(){
		cin>>Name;
	}
	void outputName( string p){
		if(p=="Abhishek"){
		cout<<Name<<endl;
		}
	}
};
int main(){
	boy x;// this is static allocation   
 	boy *b= new boy;// this is dynamic allocation and the adress of the data is stored in b.

// we use the syntax "(*b).inputName" to access anth inside the class
// we can also use "b->intputName" to access the class element;


	// this code is for static allocation
	cout<<"enter name: "<<endl;
	x.inputName();
	cout<<"enter age"<<endl;
	cin>>x.age;
	string password;
	cout<<"enter password to print name and age "<<endl;
	cin>>password;
	x.outputName(password);
	cout<<x.age<<endl;


return 0;
}