#include<bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;
		node* next;
		
		node(int val){
			data=val;
			next=NULL;
		}
};

 node* mergeLL(node* head1,node* head2){
 	node* Dhead=new node(-1);
 	
 	node* ptr1=head1;
 	node* ptr2=head2;
 	node* ptr3=Dhead;
 	
 	while(ptr1!=NULL && ptr2!=NULL){
 		if(ptr1->data>ptr2->data){
 			ptr3->next=ptr2;
 			ptr2=ptr2->next;
		 }
		 
		 else{
		 	ptr3->next=ptr1;
		 	ptr1=ptr1->next;
		 }
		 ptr3=ptr3->next;
	 }
	 
	 if(ptr1==NULL){
	 	ptr3->next=ptr2;
	 }
	 else{
	 	ptr3->next=ptr1;
	 }
	 
	 return Dhead->next;
 }
 
 void insertAtTail(node* head,int k){
 	node* new_node=new node(k);
 	node* temp=head;
 	while(temp->next!=NULL){
 		temp=temp->next;
	 }
	 
	 // temp now points to last node
	 temp->next=new_node;
 }
 
 void display(node* head){
 	node* temp=head;
 	while(temp!=NULL){
 		cout<<"["<<temp->data<<"]";
 		temp=temp->next;
	 }
 }
 
 int main(){
 
 	node* head1=new node(1);
 	insertAtTail(head1,3);
 	insertAtTail(head1,5);
 	insertAtTail(head1,7);
 	insertAtTail(head1,9);
 	
 	node*head2=new node(2);
 	insertAtTail(head2,4);
 	insertAtTail(head2,6);
 	insertAtTail(head2,8);
 	
 	node* returnHead=mergeLL(head1,head2);
 	display(returnHead);
 	
 	cout<<endl;
 	cout<<"1LL:= ";
 	display(head1);
 	cout<<endl;
 	cout<<"2ll:= ";
 	display(head2);
 	
 		
	 
 	
 }
 	
 	