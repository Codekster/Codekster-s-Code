#include<bits/stdc++.h>
using namespace std;
int front=0;
int rear=-1;
void enqueue(int array[],int size,int data){
    if(rear==-1){
        cout<<"Queue is empty ";
    }
    if(rear==size){
        cout<<"The queue is full <overflow>: "<<endl;
        return;
    }

    rear++;
    array[rear]=data;

}

int main(){
    int size;
    cout<<"enter the size of the Queue: ";
    cin>>size;
    int Qarray[size];


    enqueue(Qarray,size,14);
    enqueue(Qarray,size,23);
    enqueue(Qarray,size,43);
    enqueue(Qarray,size,52);
    enqueue(Qarray,size,59);
    enqueue(Qarray,size,86);

    for(int i=0;i<size;i++){
        cout<<Qarray[i]<<" ";
    }

   


}