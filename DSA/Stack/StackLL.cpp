#include<bits/stdc++.h>
using namespace std;



class myStack{
    public:
    int data;
    myStack* next;

    myStack(int value){
        this->data=value;
        this->next=NULL;
    }
};

void push(myStack* &head,int data){
    myStack* element=new myStack(data);
  element->next=head;
  head=element;
}

void pop(myStack* &head){
    myStack* element=head;
    head=head->next;
    cout<<"deleted element is: "<<element->data<<endl;
    delete element;
}

void top(myStack* head){
    cout<<head->data;
}




int  main(){
    myStack* head= new myStack(1);
    
  
}