#include<iostream>
#include<math.h>
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
void insertAtLast(node* &head, int val){
	head=new node(val);
	node* new_node=new node(val);
	node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=new_node;
	new_node->next=NULL;
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
void insertAtPos(node* &head, int val,int pos){
	 if(pos==0){
	 	insertAtHead(head,val);
	 	return;
	 }
	
	node* new_node= new node(val);
	node* temp=head;
	int cur_pos=0;
	while(cur_pos!=pos-1){
		temp=temp->next;
		cur_pos++;
	}
	//temp is pointing to pos-1
	new_node->next=temp->next;
	temp->next=new_node; 
}
void updateAtPos(node* head,int info,int pos){
	node* temp=head;
	int cur_pos=0;
	
	while(cur_pos!=pos){
		temp=temp->next;
		cur_pos++;
	}
	//temp willl point to pos
	temp->val=info;
}

void deleteAtHead(node* &head){
	node* temp=head;
	head=head->next;
	free(temp);
}
void deleteAtLast(node* head){
	node* temp=head;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	//temp will point to node before deleted
	free(temp->next);
	temp->next=NULL;
	
}
void deleteAtPos(node* head,int pos){
	
	if(pos==0){
		deleteAtHead(head);
	}
	node* temp=head;
	node* curr_node;
	int counter=0;
	while(counter!=pos-1){
		temp=temp->next;
		counter++;
	}
	//temp will point to prev node of node to be deleted
    curr_node=temp->next;// node to be deleted
    temp->next=curr_node->next;
    free(curr_node);
    
}


int main(){
  node* head=new node(45);
  for(int i=0;i<=6;i++){
  	int a;
  	cout<<"enter the value for node"<<endl;
  	cin>>a; 
  	insertAtLast(head,a);
  }
  cout<<"the initial link list is"<<endl;
  display(head);
  
  insertAtLast(head,78);
  cout<<"<- insertAtLast(head,78)->"<<endl;
  display(head);
   
  insertAtPos(head,12,6);
  cout<<"<-insertAtPos(head,12,6)->"<<endl;
  display(head);
  cout<<endl;
   
  updateAtPos(head,45,6);
  cout<<"<-updateAtPos(head,45,6)->"<<endl;
  display(head);
  cout<<endl;
   
  deleteAtHead(head);
  cout<<"<-deleteAtHead(head)->"<<endl;
  display(head);
  cout<<endl;
   
 deleteAtLast(head);
 cout<<"<-deleteAtLast(head)->"<<endl;
  display(head);
  cout<<endl;
  
  deleteAtPos(head,6);
  cout<<"<-deleteAtPos(head,6)->"<<endl;
  display(head);
  
 
}
   

