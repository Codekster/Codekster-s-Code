#include<iostream>
#include<math.h>
using namespace std;

bool isHappy(int n) {
        int number=n;
         int soln=0;
        int prevSoln;
        while(soln!=1){
            soln=0;
            
            
            while(number>0){
                soln+=pow(number%10,2);
                number=number/10;
            }

            if(soln==number){
               return false;
            }



            

            number=soln;
            prevSoln=soln;
            
        }

        return true;

        
    }

    int main(){
        bool x=isHappy(19);
        if(x){
            cout<<"number is a happy number";

        }

        else{
            cout<<"number is not happy";
        }
    }