#include<bits/stdc++.h>
using namespace std;

int Size;

class node{
    public:
    int info;
    node* next;

    node(int val){
        this->info=val;
        this->next=NULL;
    }
    
};

void enqueue(node* &head,int val,int &Size){
    if(Size==0){
        cout<<"queue is full"<<endl;
        return;
    }
    
    node* new_node=new node(val);
    
    if(head==NULL){
    	head=new_node;
	}
	else{
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
	}
	Size--;
}
void dequeue(node* &head){
    node* temp=head;
    head= head->next;
    free(temp);
}

void display(node* head){
    node * temp=head;
    while(temp!=NULL){
        cout<<"["<<temp->info<<"]"<<endl;
        temp=temp->next;
    }
}

int main(){
    node* head=NULL;

    int n;
    cout<<"enter the size of the queue (indexing will be from 0 to n)"<<"\n";
    cin>>n;
    Size=n;

    
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter the value to be inserted"<<"\n";
        cin>>x;
        enqueue(head,x,Size);
    }
	cout<<endl;

   enqueue(head,23,Size);
    cout<<"displaying the queue"<<endl;

    display(head);

}
