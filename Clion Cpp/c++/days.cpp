#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    int i=1;
    int sum=0;
    cout<<"enter the iteration value";
    cin>>n;

    HELLO:
        cout<<i<<"+";
        sum+=i;
        i++;
    
    if(i<=n){
        goto HELLO;
    }
     
     cout<<" = "<<sum;


    


}