#include<iostream>
using namespace std;

int main(){
    int arr[]={23,1,10,5,2};

    for(int i=1;i<5;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }

     
        arr[j+1]=key;


    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}