#include<bits/stdc++.h>
// #include<iostream>
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


void display(myStack* head){
    while (head!=NULL)
    {
        /* code */
        cout<<head->data<<" -- ";
        head=head->next;
    }
    
}

int  main(){
    myStack* head= new myStack(1);

push(head,2);
push(head,3);
push(head,24);
push(head,25);
push(head,26);
push(head,27);

display(head);
cout<<endl;
pop(head);
cout<<endl;
display(head);


    
  
}