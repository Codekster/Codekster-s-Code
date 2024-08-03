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

node* findingMiddleElement(node* &head){
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

bool detectCycle(node* head){
	node* slow=head;
	node* fast=head;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast){
			cout<<slow->data<<"\n";
			return true;
		}
	}
	return false;
}

void removeCycle(node* head){
	node* slow=head;
	node* fast=head;
	
	do{
		slow=slow->next;
		fast=fast->next->next;
	}
	while(slow!=fast);
	
	fast=head;
	while(slow->next!=fast->next){
		slow=slow->next;
		fast=fast->next;
	}
	slow->next=NULL;
}

int main(){
    node* head=new node(1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    insertAtTail(head,8);
	insertAtTail(head,89);
	insertAtTail(head,10);
	insertAtTail(head,11);
	cout<<head->data<<endl;
	
//    node* middle=findingMiddleElement(head);
//    cout<<middle->data;
//    return 0;
    head->next->next->next->next->next->next->next->next->next->next= head->next->next->next->next->next;
    
    bool s=detectCycle(head);
    if(s==1){
    	cout<<"cycle detected"<<"\n";
	}
	else{
		cout<<"no cycle";
	}
	
	removeCycle(head);
	
	 bool t=detectCycle(head);
    if(t==1){
    	cout<<"cycle detected"<<"\n";
	}
	else{
		cout<<"no cycle";
	}

}