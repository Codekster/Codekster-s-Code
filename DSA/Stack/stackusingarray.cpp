#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int size;
    int *arr;
    int top;

    Stack(int s){
        this->size=s;
        arr=new int[s];
        this->top=-1;
    }

    void push(int data){
        if(this->top==this->size-1){
            cout<<"Overflow\n"<<endl;
            return;

        }
        this->top++;
        this->arr[this->top]=data;   
     }
    
    void pop(){
        if(this->top==-1){
            cout<<"Underflow"<<endl;
            return;
        }
        this->top--;
    }

    int gettop(){
        if(this->top==-1){
            cout<<"underflow"<<endl;
            return INT_MIN;
        }
        return this->arr[this->top];
    }

    bool isEmpty(){
        return this->top==-1;
    }
    bool isFull(){
        return this->top==size-1;
    }

    int getsize(){
        return this->top+1;
    }
};
int main(){
    int n;
    cout<<"Enter the number of element to be inserted in stack"<<endl;
    cin>>n;
    Stack st(n);
    
    for(int i=1; i<=n; i++){
        int x;
        cout<<"enter the value to be inserted"<<endl;
        cin>>x;
        st.push(x);
    }
    for(int i=0; i<n;i++){
        cout<<st.arr[i]<<" ";
    }

     
    
}