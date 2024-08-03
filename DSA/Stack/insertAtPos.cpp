#include<bits/stdc++.h>
#include<stack>
using namespace std;


void insertAtPos(stack<int> &st,int pos,int val){
	stack<int>temp;
	for(int i=0; i<pos;i++){
		int curr=st.top();
		temp.push(curr);
		st.pop();
	}
	st.push(val);
	while(not temp.empty()){
		int curr=temp.top();
		st.push(curr);
		temp.pop();
		
	}
	
}

int main(){
	stack<int>st;
    st.push(1);
    st.push(2); st.push(3); st.push(4); st.push(5); st.push(6); st.push(7);
    
    
    cout<<"size of stack is: "<<st.size()<<"\n"<<"\n";// size of the stack
    // printing the original stack
    
    stack<int>copy=st;//making a copy to avoid modifying the original stack
    
    //printing the stack
    cout<<"the original stack is:"<<"\n"<<"\n";
    
    while(!copy.empty()){
    	cout<<copy.top()<<endl;
    	copy.pop();
	}
    cout<<"\n";
    
    int x,pos;
    cout<<"Enter the position for the number to be inserted"<<endl;
    cin>>pos;
    cout<<"enter the number to be inserted at position you specified"<<endl;
    cin>>x;
    insertAtPos(st,pos,x);// inserting the number on to the required position
    cout<<"\n";
    //printing the modified stack
    cout<<"the modified stack with entered value:"<<x<<" at position:"<<pos<<" is: "<<"\n"<<"\n";

   while(not st.empty()){
	   	 cout<<st.top()<<endl;
	   	 st.pop();
   }
}