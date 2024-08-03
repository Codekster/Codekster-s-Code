#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int value){
        this->data=value;
        this->next=NULL;
    }
};

void insertAtLast(auto &head, int val){
    if(head==NULL){
        head->data=val;

    }

    else{
         node* new_node=new node(val);
         node*temp=head;
         while(temp->next!=NULL){
         }
        temp->next=new_node;
    }

   
}

void display(node* head){
    while(head->next!=NULL){
        cout<<"[ "<<
    }
}

int main(){
    node *head=NULL;
    
    int length;
    cout<<"enter the length of your linked list: ";
    cin>>length;

    for(int i=0;i<length;i++){
        int a;
        cout<<"enter the value to be inserted: ";
        cin>>a;
        insertAtLast(head,a);
    }

    display(head)
}