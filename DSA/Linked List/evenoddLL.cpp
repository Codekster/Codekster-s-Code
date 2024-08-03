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
 
 node* oddEvenLL(node* &head){
 	node* evenhead= head->next;
 	node* odd=head;
 	node* even=evenhead;
 	
 	while(even!=NULL && even->next!=NULL){
 		odd->next=odd->next->next;
 		even->next=even->next->next;
 		even=even->next;
 		odd=odd->next;
 		
	 }
 	odd->next=evenhead;
 	return head;
 }
 
 node* reorderLinkedList(node* &head){
    //Can find if the linked list has atleast 3 elements
 	
 	//1. finding the middle element using fast and slow pointer
 	
 	node* slow=head;
 	node* fast=head;
 	
 	while(fast && fast->next){
 		slow=slow->next;
 		fast=fast->next->next;
	 }
	 
	 // now slow is pointing to the middle element
	 
	 //2. separate the linked list
	 
	 node* curr= slow->next;
	 slow->next=NULL;
	 node* prev=slow;
	 
	 while(curr){
	 	node* nextPtr=curr->next;
	 	curr->next=prev;
	 	prev=curr;
	 	curr=nextPtr;
	 	
	 }
	 
	 //3. merging the two halves of the linked list
	 
	 node* ptr1=head;//head of LL first half
	 node* ptr2=prev;// head of LL second half
	 
	 while(ptr2!=ptr1){
	 	node* temp=ptr1->next;
	 	ptr1->next=ptr2;
	 	ptr1=ptr2;
	 	ptr2=temp;
	 }
	 
	 return head;

 }
 
 node* swapAdjacent( node* &head){
 	
 	//base case
 	
 	if(head==NULL || head->next==NULL){
 		return head;
	 }
	 
 	//recursive case
 	
 	node* secondNode=head->next
 	head->next=swapAdjacent(secondNode->next);
 	secondNode->next=head;
 	return secondNode;
 }
 
 
 int main(){
 	
 	node* head1=new node(1);
 	insertAtTail(head1,2);
 	insertAtTail(head1,3);
 	insertAtTail(head1,4);
 	insertAtTail(head1,5);
 	insertAtTail(head1,6);
 	insertAtTail(head1,7);
 	cout<<"odd-even shuffle"<<endl;
 	
 	node* newhead= oddEvenLL(head1);
 	display(head1);
 	cout<<endl;
 	cout<<"reordering"<<endl;
 	
 	node* nHead= reorderLinkedList(head1);
 	
 	display(nHead);
 }