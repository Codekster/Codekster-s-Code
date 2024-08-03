#include<iostream>
using namespace std;

int main(){
    int arr1[2][3];
    int arr2[3][2];
    int arr3 [2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<"enter the value for ["<<i<<"]"<<"["<<j<<"]";
            cin>>arr1[i][j];
        }
    }



    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<"enter the value for ["<<i<<"]"<<"["<<j<<"]";
            cin>>arr2[i][j];
        }
    }



    int sum=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                sum+=arr1[i][k]*arr2[k][j];
            }
            arr3[i][j]=sum;
            sum=0;
        }
    }

    //cout<<"1st matrix  ";

    
    for(int i=0;i<2;i++){
    	cout<<"| ";
        for(int j=0;j<3;j++){
            cout<<arr1[i][j]<<" ";
           
        }
        cout<<" |"<<endl;
    }
    
   

    cout<<" h'
	' "<<"X"<<"  "<<endl<<endl;

    



     for(int i=0;i<3;i++){
     	cout<<"| ";
        for(int j=0;j<2;j++){
            
            cout<<arr2[i][j]<<" ";
        }
        cout<<" |"<<endl;
    }

    cout<<endl;

    cout<<"  ||"<<endl<<endl;

    



     for(int i=0;i<2;i++){
     	cout<<"| ";
        for(int j=0;j<2;j++){
            
            cout<<arr3[i][j]<<" ";
        }
        cout<<" |"<<endl;
    }
    
}