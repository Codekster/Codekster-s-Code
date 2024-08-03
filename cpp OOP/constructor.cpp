#include<bits/stdc++.h>
using namespace std;

class books{
    public:
    string Name;
    string Author;
    int year;
    books(string x, string y, int z){ // this is a contructor with parameter

    Name=x;
    Author=y;
    year=z;

    }

};
int main(){
    
    
    books Alchemist("Alchemist","Paulo", 1998);
    cout<<Alchemist.Name<<" "<<Alchemist.Author<<" "<<Alchemist.year;

return 0;
    
}
