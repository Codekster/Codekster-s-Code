// Encapsulation=,wrapping up data member/function
// fully encapsulated class== all data members are private
/* Advantage:
             data hiding
             if we want we can make our class read only
             code reusability
             
*/
#include<bits/stdc++.h>
using namespace std;
class student{

    private:
    string name;
    int age;;
    int height;

    public:
    int getAge(){
        return this->age;
    }
};
int main(){
    student first;
    cout<<"sab sahi chal rha hai"<<endl;
    return 0;
} 