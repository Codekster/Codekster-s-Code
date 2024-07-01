#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
 change(int &a, int &b){
	a=a+33;
	b=b+33;
	
}

int main(){
	int num1,num2;
	cout<<"enter two numbers"<<endl;
	cin>>num1>>num2;
	cout<<num1<<" "<<num2<<endl;
	change(num1,num2);
	cout<<num1<<" "<<num2<<endl;
	
	
	

    return 0;
}
