#include<bits/stdc++.h>
using namespace std;
class sample{
    static int count;
    int x,y;
    public:
    sample(int i,int j){
        x=i;y=j;
        count++;
    }
    void show(){
        cout<<"x is "<<x<<endl;
        cout<<" y is "<<y<<endl;
    }
    
    
};