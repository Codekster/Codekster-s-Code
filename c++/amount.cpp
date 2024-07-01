#include<bits/stdc++.h>
using namespace std;
int main(){
    int amount;
    cout<<"enter amount"<<endl;
    cin>>amount;

    int years,months,weeks,dates ,hundreds, fifties;
    years=amount/2000;

    amount%=200;

    months=amount/1000;

    amount%=1000;
    weeks=amount/500;
    amount%=500;

    dates=amount/200;
    amount%=200;

    hundreds=amount/100;
    amount%=100;

    fifties=amount/50;
    amount%=50;







    

    cout<<years<<" 2000s "<<endl<<months<<" 1000s "<<endl<<weeks<<" 500s"<<endl<<dates<<" 200s "<<endl<<hundreds<<" hundreds "<<endl<<fifties<<" fifties "<<endl<<amount<<" remaining";

}

