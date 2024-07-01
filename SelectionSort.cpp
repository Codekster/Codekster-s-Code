#include<iostream>
using namespace std;
int main(){
    int arr[]={9,6,6,3,7,4,8};
    // int  min=arr[0];
    for(int i=0;i<7;i++){
        int min=arr[i];
        int k;
        for(int j=i;j<7;j++){
            if(min>=arr[j]){
                min=arr[j];
                k=j;
            }
        
        }

        int temp=arr[i];
        arr[i]=min;
        arr[k]=temp;

        

        
    }

    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}