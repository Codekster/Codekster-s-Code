#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

class Test{
	public:
	int id;
	string msg;
	
		Test(int id,string msg){
			this->id=id;
			this->msg=msg;
		}
		
		Test(Test &obj){
			id=obj.id;
			msg=obj.msg;
		}
		
		void print(){
			cout<<"ID "<<id<<endl;
			cout<<"Message "<<msg<<endl;
		}
};
int main(){
	Test ob1(12,"hello user");
	
	Test ob2(ob1);
	ob2.print();
	cout<<endl;
	ob1.id=13;
	
	ob2.print();
    return 0;
}
