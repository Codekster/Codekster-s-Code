#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int value){
        this->data = value;
        this->next=NULL;
    }
};

int main(){
    node* head= new node(1);
    node* head1= new node(11);
    node* head2= new node(12);
    node* head3= new node(13);
    node* head4= new node(14);

    head->next=head1;
    head1->next=head2;
    head2->next=head3;
    head3->next=head4;
// Making the linked list circular 

    head4->next=head;

    node* temp=head;

    do{
        cout<<temp->data<<"--";
        temp=temp->next;
    }

    while(temp!=head); 
}