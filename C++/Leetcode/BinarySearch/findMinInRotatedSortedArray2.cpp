#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int findMin(vector<int>nums){
    int n=nums.size();
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int min=INT_MAX;
    if(n==1){
        return nums[start];
    }
    if(nums[start] < nums[end]){
        return nums[start];
    }
    while(start<=end){
        if(mid < n-1 && nums[mid] > nums[mid+1]){
            return nums[mid+1];
        }
        if(mid > 0 && nums[mid]< nums[mid-1]){
            return nums[mid];
        } 
        if(nums[mid] > nums[end]){
           start=mid+1;
        }
        else if(nums[mid]<nums[end]){
            end=mid;
        }
        else{
            end--;
        }

        mid=start+(end-start)/2;
       
    }
   return nums[start];  
}

int main(){
    vector<int>nums{52, 1};
    int ans = findMin(nums);
    cout<<ans;
}


