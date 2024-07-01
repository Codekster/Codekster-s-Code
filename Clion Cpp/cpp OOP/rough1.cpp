#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
     int n;
     cout<<"enter sie of array: ";
	    cin>>n;
	    int arr[n];
	    
	    for(int i=0;i<n;i++){
            cout<<"enter a value: ";
	        cin>>arr[i];
	    }
	    
	    sort(arr,arr+n);

        // for(int i=0;i<n;i++){
        //     cout<<arr[i]<<" ";
        // }

	    int opr=0;
	    int cnt=0;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]>n){
	            cout<<"-1"<<endl;
	            return 0;
	        }
	        
	        if(arr[i]==n){
	            cnt++;
	            if(cnt==2){
	                cout<<"-1"<<endl;
	                return 0;
	            }
	            
	        }
	        
	        if(arr[i]<i+1){
	            opr+=(i+1)-arr[i];
	        }
	        
	        
	    }
	    
	    cout<<opr<<endl;
}