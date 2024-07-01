#include<iostream>
using namespace std;

int  main(){
    int arr[]={4,2,7,9,8};

    int size=sizeof(arr)/sizeof(int);
    int great=arr[0];

    for(int i=1;i<size;i++){
        if(arr[i]>great){
            great=arr[i];
        }
    }

    cout<<"greatest digit is: "<<great<<endl;
}
