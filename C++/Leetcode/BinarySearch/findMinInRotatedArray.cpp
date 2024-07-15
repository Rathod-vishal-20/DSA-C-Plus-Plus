#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int findMin(vector<int>nums){
    int min= INT_MAX;

    int start=0;
    int end= nums.size()-1;
    int mid= start + (end - start)/2;

    while(start<=end){
        if(nums[start] < nums[mid]){
            if(nums[start] < mid){
                min = nums[start];
            }
        }
        else{
            
        }
    }
    return min;
}

int main(){
    vector<int>nums{3,4,5,1,2};

    int find = findMin(nums);
    cout<<find;
}