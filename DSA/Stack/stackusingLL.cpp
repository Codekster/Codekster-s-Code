#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int Count=0;
int Size=0;

class nodeStack{
    public:
    int info;
    nodeStack* next;
   
    
    
    nodeStack(int data){
        this->info=data;
    
        next=NULL;
    }

};
void push(nodeStack* &head,int data){
    if(Count==Size){
        cout<<"overflow !!! chutiye stack full hai"<<endl;
        return;
    }
    nodeStack* new_node=new nodeStack(data);
    new_node->next=head;
    head=new_node;
    Count++;
   
    
}
void display(nodeStack* head){
    nodeStack* temp=head;
    while(temp!=NULL){
        cout<<"["<<temp->info<<"] ";
        temp=temp->next;
    }
}
void top(nodeStack* head){
    cout<< head->info;
}

void pop(nodeStack* head){
    if(Count==0){
        cout<<"UNDERFLOW!! stack khali hai bhai";
        return;
    }
    nodeStack* temp=head;
    head=head->next;
    Count--;


}
void declaresize(int c){
        Size=c;
    }

int main(){
    nodeStack* head=new nodeStack(9);
    int n;
    cout<<"enter the length of the stack"<<endl;
    cin>>n;
    declaresize(n);
    for(int i=0; i<n;i++){
        int x;
        cout<<"Enter the value to be inserted in the stack";
        cin>>x;
        // Count++;
        push(head,x);
//        if(Count==n){
//            break;
//        }
        
    }
    push(head,56);
    pop(head);
    pop(head);
    pop(head);
    pop(head);
    pop(head);
    pop(head);pop(head);pop(head);pop(head);
    
    
     

    cout<<"the current stack is:= "<<endl;
    display(head);

    
    
}