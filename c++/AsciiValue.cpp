#include<bits/stdc++.h>
using namespace std;

int main(){

   
   int n;
   char answer;

   cout<<"Do you want to see the ASCII value of all character Y/N"<<endl;

   cin>>answer;

   if(answer=='Y'){
    n=256;
    for(int i=0;i<n;i++){
        cout<<i<<". "<<char(i)<<endl;
    }

   }

   else{
    cout<<"enter the ASCII value whose equivalent you need"<<endl;
    cin>>n;
    cout<<"Character for ASCII value "<<n<<" is "<<char(n);
   }

   
}