#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
	vector<int>vc;
	int n;
	cout<<"enter the number"<<endl;
	

	cin>>n;
//	cout<<"1 ";
	while(n>=1){
		int a=n%2;
		
		vc.push_back(a);
		//cout<<a<<endl;
		n=n/2;
		
	}
	cout<<vc.size()<<endl;
	cout<<vc[0]<<endl;
//	cout<<endl;
//	cout<<1%2;
	
	for(int i=vc.size()-1; i>=0;i--){
		cout<<vc[i]<<" ";
	}
	return 0;
}