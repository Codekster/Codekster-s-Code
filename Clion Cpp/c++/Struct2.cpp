#include<iostream>
using namespace std;

struct Student{
    int roll;
    char name[20];
    char addr[40];
};

int main(){
    struct Student st[5];
    for(int i=0;i<5;i++){
        cout<<"enter roll no: "<<endl;
        cin>>st[i].roll;
        cout<<"enter name: "<<endl;
        cin>>st[i].name;
    }

     for(int i=0;i<5;i++){
        cout<<st[i].roll<<endl;
        cout<<st[i].name<<endl;
        cout<<"========================================"<<endl;
        
    }

}


// #include <cstdlib> 
// #include<time.h>
// #include <iostream> 
// using namespace std; 
  
// int main() 
// { 
// srand(time(NULL));
//    int x=rand()%100;
//    cout<<x<<endl;
// //    x=rand()%25;
// //    cout<<x<<endl;
//     return 0; 
// }