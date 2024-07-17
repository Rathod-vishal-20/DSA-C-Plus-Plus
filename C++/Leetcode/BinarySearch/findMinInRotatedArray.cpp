#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int findMin(vector<int>nums){
    int min= INT_MAX;

    int start=0;
    int end= nums.size()-1;
    int mid= start + (end - start)/2;

    if(nums[start] <= nums[end]){
        return nums[start];
    }

    while(start<=end){
        if(nums[mid] > nums[mid+1]){
           return nums[mid+1];
        }
        if(nums[mid-1] > nums[mid]){
            return nums[mid];
        }
           
            
        if(nums[mid] > nums[start]){
            start = mid+1;
        }
        else{
            end = mid -1;
        }
        mid= start + (end - start)/2;
    }
    return min;
}

int main(){
    vector<int>nums{4,5,6,7,8,0,1,2};

    int find = findMin(nums);
    cout<<find;
}