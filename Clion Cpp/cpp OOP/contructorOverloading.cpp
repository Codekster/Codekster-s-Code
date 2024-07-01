#include <bits/stdc++.h>
using namespace std;
class test{
  public:
  int num1;
  string str;

  test(){
    cout<<"default constructor called: "<<endl;
  }

  test(int a, string s1){
    this->num1=a;
    this->str=s1;
    cout<<"constructor with parameters "<<endl;
  }
    
};



int main () {
    test ob1;
    test ob2(23,"abhishek");
    cout<<ob2.str<<endl;

}