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

void insertAtTail(node* head,int val){
	 node* new_node= new node(val);
	 node* temp=head;
	 while(temp->next!=NULL){
	 	temp=temp->next;
	 }
	 
	temp->next=new_node;
	new_node->next=NULL;
}


bool checkingSimilarLL( node* head1, node*  head2){
	node* ptr1= head1;
	node* ptr2=head2;
	
	while(ptr1!=NULL && ptr2!=NULL){
		if(ptr1->data!=ptr2->data){
			return false;
		}
		
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}
	
	//upto this point either ptr1 is NULL or ptr2 is NULL or both have become NULL
	
	return (ptr1==NULL && ptr2==NULL);
}

int getLength( node* head){
	node* temp=head;
	int length=0;
	while(temp!=NULL){
		length++;
		temp=temp->next;
		
	}
	return length;
}	

node* moveHeadByK(node* head, int k){
	node* temp=head;
	while(k--){
		temp=temp->next;
	}
	return temp;
}

node* getIntersection( node* head1, node* head2){
	node* ptr1=head1;
	node* ptr2= head2;
	//step 1: calculate length of the linked list
	
	int l1=getLength(head1);
	int l2=getLength(head2);
	//find difference K btw lengths of linked list and move the pointer of longer linked list by k
	
	if(l1>l2){
		//L1 is longer
		
		int k=l1-l2;
		ptr1= moveHeadByK(head1,k);
	}
	else{
		//l2 is longer
		int k=l2-l1;
		ptr2=moveHeadByK(head2,k);
	}
	
	while(ptr1 !=NULL){
		if(ptr1==ptr2){
			return ptr1;
		}
		
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}
	
	return NULL;
}

void insertAtBoth(node* head1,node* head2, int k){
	node* new_node=new node(k);
	node* temp1=head1;
	node* temp2=head2;
	
	while(temp1->next !=NULL){
		temp1=temp1->next;
	}
	//now temp1 is at the tail of the linked list;
	temp1->next=new_node;
	
	while(temp2->next!=NULL){
		temp2=temp2->next;
	}
	//now temp2 is at the tail of the linked list
	
	temp2->next=new_node;
	
	
}




int main(){
	node* head1=new node(1);
	insertAtTail(head1,2);
	insertAtTail(head1,3);
	insertAtTail(head1,4);
	insertAtTail(head1,5);
	
	node* head2=new node(1);
	insertAtTail(head2,2);
	insertAtTail(head2,3);
	insertAtTail(head2,4);
	insertAtBoth(head1,head2,9);
	insertAtTail(head2,5);
	
//	bool x=checkingSimilarLL(head1, head2);
//	if(x){
//		cout<<"similar";
//	}
//	else {
//		cout<<"not similar";
//	}

	node* get=getIntersection(head1,head2);
	cout<<get->data;
}