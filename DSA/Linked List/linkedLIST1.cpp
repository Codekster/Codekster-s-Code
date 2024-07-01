#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

class Employee{
    public:
    int Id;
    string name;
    int salary;
    Employee* next;

   Employee(int ID, string s1, int sal){
    this->Id=ID;
    this->name=s1;
    this->salary=sal;
    this->next=NULL;
   }
};

void insertAtLast(Employee* &head, int id,string name,int salary){
    if(head==NULL){ //since initially our head is at null
        Employee* new_node=new Employee(id,name,salary); //creating new node

        head=new_node;//assigning new node to head of the linked list
    }

    else{ //if linked list has already started and head is not null

         Employee* new_node=new Employee(id,name,salary); //creating new node

         Employee* temp=head; //creating a temporary node

         while(temp->next!=NULL){ //looping to reach the last node
            temp=temp->next;
         }

         temp->next=new_node; // adding a new node

    }
}

void display(Employee* head){
    while(head!=NULL){
        cout<<"[ ID: "<<head->Id<<endl<<"Name: "<<head->name<<endl<<"Salary: "<<head->salary<<" ]"<<endl;
        cout<<endl;
        head=head->next;
    }
}




int main(){
    Employee *head=NULL;

    cout<<"enter the number of employees you want to add: ";
    int size;
    cin>>size;

    for(int i=0;i<size;i++){
        int id,salary;
        string name;
        cout<<"enter the id of employee: ";
        cin>>id;
        cout<<"enter the name of the employee: ";
        cin.ignore();
        getline(cin,name);
        
       

        cout<<"enter the salary of the employee: ";
        cin>>salary;

        insertAtLast(head, id, name,salary); //calling the function to add node as next of already existing node
    }
    
    display(head);
}