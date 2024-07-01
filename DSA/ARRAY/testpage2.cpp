#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,7,9,8};
    int arr1[]={4,1,8};

    int arr2[10];

    for(int i=0;i<5;i++){
        arr2[i]=arr[i];
    }

    for(int i=5;i<8;i++){
        arr2[i]=arr1[i-5];
    }

     for(int i=0;i<10;i++){
       cout<<i<<" -> "<<arr2[i]<<endl;
    }
}