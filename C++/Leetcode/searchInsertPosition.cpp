#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>nums, int target){
    int size=nums.size();
    int start=0;
    int end=size-1;
    int ans=0;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid]<target){
            ans=mid+1;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    vector<int>nums{1,3,5,6};
    int target=7;

    int findTarget=searchInsert(nums,target);
    cout<<"index is : "<< findTarget;
}