#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node(int data){
        val=data;
        next=NULL;
    }
};
void display(node* head){
	
	node* temp=head;
	
	while(temp!=NULL){
	cout<<"["<<temp->val<<"~"<<temp->next<<"]"<<" ";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
	cout<<endl;
}

void insertAtHead(node* &head,int val){
	node* new_node= new node(val);
	new_node->next=head;
	head=new_node;
}
void deleteALT(node* &head){
    node* current=head;
    node* temp;
    while(current->next!=NULL  ){
     temp= current->next;
     
     current->next=temp->next;
     if(current->next==NULL){
     	free(temp);
    	return;
	 }
     current=temp->next;
    free(temp);
    }

}
int main(){
    node* head=NULL;
    int x;
    cout<<"enter the number of nodes required"<<endl;
    cin>>x;
for(int i=1;i<=x;i++){
  	int a;
  	cout<<"enter the value for node"<<endl;
  	cin>>a; 
  	 insertAtHead(head,a);
  }
  display(head);
  cout<<endl;
  deleteALT(head);
  display(head);


}