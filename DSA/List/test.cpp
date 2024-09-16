#include<bits/stdc++.h>
using namespace std;

 int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxi=0;
        for(int i=0;i<=nums.size();i++){
            if(nums[i]==1){
                count++;
            }

            else{
                maxi=max(maxi,count);
                count=0;
            }

        }
        return maxi;
        
    }

    int main(){
        vector<int>vec={1,1,1,1,0,0,1,0,1,1,0,1,1,1,1,1,1,0,1};
        int maxi=findMaxConsecutiveOnes(vec);
        cout<<maxi;
    }