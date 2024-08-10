#include<bits/stdc++.h>
using namespace std;
int front=-1;
int rear=-1;
void enqueue(int array[],int size,int data){
    // if(rear==-1){
    //     cout<<"Queue is empty ";
    // }
    if(rear==size){
        cout<<"The queue is full <overflow>: "<<endl;
        return;
    }

    rear++;
    array[rear]=data;

}

void dequeue(int array[],int size){
    // if(rear==-1){
    //     cout<<"queue is empty <underflow>: "<<endl;
    //     return;
    // }

    if(front==rear){
        cout<<"~~~~:queue is empty:~~~~"<<endl;
        
        return;
    }
   front++;
   int x= array[front];
   cout<<x<<" has been deleted"<<endl;
}

void display(int array[]){
    if(rear==front || front>rear){
        cout<<"Queue is empty"<<endl;
        return;
    }

    for(int i=front+1;i<=rear;i++){
        cout<<"  {"<<array[i]<<"}   ";
    }
}

int main(){
    string create;
    cout<<"do you want to create a queue: Y/N";
    cin>>create;

    if(create=="Y"){
        
        int decision;
        cout<<"what do you want to perform: "<<endl;
        cout<<"enter 1 for Enqueue      Enter 2 for Dequeue     Enter 3 for Display"<<endl;
        cout<<"Enter 4 to peek     Enter 5 to check if queue is empty   Enter 6 to check For full queue"<<endl;
        cin>>decision;
        switch (decision)
        {
        case 1:
            int number;
            cout<<"How many entries Do you want to make: ";
            cin>>number;
            break;
        
        default:
            break;
        }
    }
    else{
        cout<<"you wasted my time: ";
    }




   
   


}