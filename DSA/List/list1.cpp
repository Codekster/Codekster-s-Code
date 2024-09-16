#include<list>
#include<vector>
#include<iostream>

using namespace std;

int main(){
  list<int> list1{10,20,30,40,50};
//adding in front of list
  list1.push_front(0);
// addding at last of string
  list1.push_back(60);

  cout<<"first element in the list "<<list1.front()<<endl;
  cout<<"last element in the list "<<list1.back()<<endl;

  // deleting from front

  list1.pop_front();

  // deleting from the back
  list1.pop_back();

  cout<<"After deletion: "<<endl;

  cout<<"first element in the list "<<list1.front()<<endl;
  cout<<"last element in the list "<<list1.back()<<endl;


  //MAKING AN ITERAATOR

  list<int>::iterator itr=list1.begin();
  cout<<"first element is: "<<*itr;

  list<int>::iterator itr=list1.end();
  cout<<"first element is: "<<*itr;

// itr points to first element by deafualt so to print 3rd element you can give *(itr+2);

cout<<"third element is: "<<*(itr+2);



}