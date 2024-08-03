#include<bits/stdc++.h>
#include<stack>
using namespace std;


void copyingUsingRecursion(stack<int> &st, stack<int> result){
	if( st.empty()){
		return ;
	}
	int curr=st.top();
	st.pop();

	copyingUsingRecursion(st,result);
	result.push(curr);
	
}

int main(){
	stack<int>st;
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	
//	while(not st.empty()){
//		int curr=st.top();
//		st.pop();
//		cout<<curr<<endl;
//
//	}
	stack<int>result;
	copyingUsingRecursion(st,result);
	
	while(not st.empty()){
		int curr=st.top();
		st.pop();
		cout<<curr<<endl;
	
	}
	
	while(not result.empty()){
		int curr=result.top();
		result.pop();
		cout<<curr<<endl;
		
	}
}