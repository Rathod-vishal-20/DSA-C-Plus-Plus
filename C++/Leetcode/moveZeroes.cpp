#include<iostream>
#include<vector>
using namespace std;

void movesZeroes(vector<int>&nums){
    int start=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] != 0){
            if(i != start){
                swap(nums[start],nums[i]);

            }
            start++;
        }
    }
}

int main(){
    vector<int>nums{0,1,0,3,12};
    movesZeroes(nums);
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}