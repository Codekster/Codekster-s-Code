#include<bits/stdc++.h>
using namespace std;

class node{
	public:
		int val;
		node  *next;
		
		node(int data){
			val=data;
			next=NULL;
		}
};

void insertAtHead(node* &head,int val){
	node* new_node= new node(val);
	new_node->next=head;
	head=new_node;
}

void display(node *head){
	
	node* temp=head;
	
	while(temp!=NULL){
	cout<<"["<<temp->val<<"~"<<temp->next<<"]"<<" ";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
	cout<<endl;
}

int main(){
  node* head=new node(45);
  for(int i=0;i<=6;i++){
  	int a;
  	cout<<"enter the value for node"<<endl;
  	cin>>a; 
  	 insertAtHead(head,a);
  }

  display(head);
}