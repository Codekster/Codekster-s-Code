#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        this->data=val;
        next=NULL;

    }

    
};

void deleteAtPos(node* &head,int pos){
    node* temp;
    if(pos==0){
        temp=head;
        head=head->next;
        delete temp;
    }
    else{
        temp=head;
        while(pos>2 && temp->next!=NULL){
           temp=temp->next;
           pos--;
        }
        node* temp1=temp->next;

        temp->next=temp1->next;

        delete temp1;

    }
}

void display(node* head){
    while(head!=NULL){
        cout<<head->data<<" -- ";
        head=head->next;
    }
}



int main(){
    node* head=new node(1);
    node* h2=new node(2);
    node* h3=new node(3);
    node* h4=new node(4);
    node* h5=new node(5);
    node* h6=new node(6);
    node* h7=new node(7);
    node* h8=new node(8);

    head->next=h2;
    h2->next=h3;
    h3->next=h4;
    h4->next=h5;
    h5->next=h6;
    h6->next=h7;
    h7->next=h8;

    display(head);
    cout<<endl;

    deleteAtPos(head,3);

    display(head);

   
    
}