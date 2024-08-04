#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int>nums){
    int start=0;
    int end=nums.size()-1;
    int mid=start + (end-start)/2;

    while(start<=end){

        if(nums[mid] < nums[end]  && nums[mid] > nums[mid+1]){
            return true;
        }
        if(nums[mid] > nums[mid-1]){
            return true;
        }
        if(nums[start]<= nums[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        
        mid=start + (end-start)/2;
    }
    return false;
}

int main(){
    vector<int>nums{2,1,3,4};
    bool ans=check(nums);
    if(ans){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}