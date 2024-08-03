#include<bits/stdc++.h>
#include<stack>
using namespace std;

void recursionIAB(stack<int> &st, int x){
	if(st.empty()){
		st.push(x);
		return;
	}
	int curr=st.top();
	st.pop();
	recursionIAB(st,x);
	st.push(curr);
}

void insertAtBottom(stack<int> &st, int x){
    stack<int>temp;
    while(not st.empty()){
        int curr=st.top();
        st.pop();
        temp.push(curr);

    }
    st.push(x);
    while(not temp.empty()){
        int curr=temp.top();
        temp.pop();
        st.push(curr);
    }
}

int main(){

    stack<int>st;
    st.push(1);
     st.push(2); st.push(3); st.push(4); st.push(5); st.push(6); st.push(7);
    

    
    
    int x;
    cout<<"enter the number to be inserted at bottom"<<endl;
    cin>>x;
    recursionIAB(st,x);
    insertAtBottom(st,x);

    while(not st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}