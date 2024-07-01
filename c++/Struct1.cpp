#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<fstream>

struct Employee{
	int empId;
	char name[40];
	char email[50];
};

using namespace std;

int main(){
	struct Employee emp={133,"Abhishek Pandey","asdfghjkl@gmail.com"
	};
	
	cout<<"Employee ID: "<<emp.empId<<endl;
	
	cout<<"enter ID again ";
	cin>>emp.empId;
	
	cout<<"Employee ID: "<<emp.empId;
	
	
    return 0;
}
