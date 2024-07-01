#include<iostream>
using namespace std;

int main(){
  int  arr[3][3];
  int even=0;
  int odd=0;

  for(int i =0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<"enter element"<<endl;
        cin>>arr[i][j];
    }
  }

    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
           arr[i][j]%2==0?arr[i][j]=0:arr[i][j]=1;
           arr[i][j]==0?even++: odd++;

        }
  }

  
  for(int i =0;i<3;i++){
    for(int j=0;j<3;j++){
        
        cout<<arr[i][j]<<" ";
    }

    cout<<endl;
  }

  cout<<endl;

  cout<<"number of even numbers is: "<<even<<endl;

  cout<<"number of odd element is: "<<odd<<endl;



}
