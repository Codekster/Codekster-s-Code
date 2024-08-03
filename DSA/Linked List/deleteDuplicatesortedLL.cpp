#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int info;
    node *next;
    node(int a){
        info=a;
        next=NULL;

    }
};

void insertAtHead(node* &head,int info)
{
	node *new_node=new node(info);
	new_node->next=head;
	head=new_node;
}

void display(node *head){
	node *temp=head;
	
	while(temp->next!=NULL){
		cout<<"["<<temp->info<<" ~ "<<temp->next<<"] ";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
	cout<<endl;
}

void delDuplicate(node *head){
	node* curr=head;
	node* temp;
	
	while(curr->next!=NULL){
		if(curr->info==curr->next->info){
			temp=curr->next;
			curr->next=temp->next;
			free(temp);
		}
		else{
			curr=curr->next;
		}
	}
}
int main(){
    node *head=new node(12);
    int sizeOfLL;
    cout<<"enter the size of the linked list"<<endl;
    cin>>sizeOfLL;
    
    for(int i=0; i<=sizeOfLL;i++)
    {
    	int x;
    	cout<<"enter the value for node"<<endl;
    	cin>>x;
    	insertAtHead(head,x);
    	
	}
	
	display(head);
	cout<<endl;
	cout<<"delDuplicate"<<endl;
	delDuplicate(head);
	cout<<endl;
	cout<<"display"<<endl;
	display(head);
}