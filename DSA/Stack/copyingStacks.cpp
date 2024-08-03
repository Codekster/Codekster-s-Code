#include<bits/stdc++.h>
#include<stack>
using namespace std;
//whenever we transfer data from one stack t ano0ther then data get reversed
stack<int> copyStack(stack<int> &input){
	stack<int> temp;
	while(not input.empty()){
		int curr=input.top();
		input.pop();
		temp.push(curr);
	}
	
	stack<int>result;
	while(not temp.empty()){
		int curr=temp.top();
		temp.pop();
		result.push(curr);
	}
	return result;
}
int main(){
   
   stack<int>st;
   st.push(1);
	st.push(23);
     st.push(14);
      st.push(15);
       st.push(16);
        st.push(17);
         st.push(14);
    
    
    stack<int>res=copyStack(st);
         
	while(not st.empty()){//st stack is empty now
		int curr=st.top();
		cout<<curr<<endl;
		st.pop();
	}
	//stack<int>res=copyStack(st);
	cout<<endl;
	
		while(not res.empty()){
		int curr=res.top();
		cout<<curr<<endl;
		res.pop();
	}
	
	
}