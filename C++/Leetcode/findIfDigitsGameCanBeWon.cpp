#include<iostream>
#include<vector>
using namespace std;

    bool canAliceWin(vector<int>& nums) {
        int alice=0;
        int bob=0;
        for(int i=0 ; i<nums.size(); i++){
           if(nums[i] < 10){
            alice+=nums[i];
           }
           else{
            bob+=nums[i];
           }
        }
       if(alice != bob){
        return true;
       }
        return false;
    }



int main(){
    vector<int>nums{9,9,18};
    bool ans=canAliceWin(nums);
    if(ans){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}