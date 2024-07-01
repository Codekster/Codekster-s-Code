#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

int main(){
    node *ob1=new node(10);
    node *ob2=new node(20);
    node *ob3=new node(30);

    ob1->next=ob2;
    ob2->next=ob3;
    node *temp=ob1;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
 

}