#include<iostream>
using namespace std;
class myclass{
    int x,y;
    public:
    void init(int i,int j){
        x=i;
        y=j;
    }
    friend int max(myclass ob);
   
};
int max(myclass ob){
    if(ob.x>ob.y){
        cout<<"x is "<<ob.x<<endl;
    }
    else if(ob.y>ob.x){
        cout<<" y is "<<ob.y<<endl;
    }
    else{
        return 0;
    }
    
}
 
// void myclass::swap(){
//     int a=x;
//     x=y;
//     y=a;

//}
// void myclass::show(){
//     cout<<"x is "<<x<<endl;
//     cout<<"y is "<<y<<endl;
// } 
int main(){
    myclass ob;
    int p,q;
    cout<<" enter the value of p and q;"<<endl;
    cin>>p>>q;
    ob.init(p,q);
    int  r;
    r=max(ob);
    if(r==0){
        cout<<" both numbers are equal"<<endl;
    }
    
}