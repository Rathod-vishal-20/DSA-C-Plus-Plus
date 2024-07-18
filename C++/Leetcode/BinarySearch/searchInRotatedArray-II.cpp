#include<iostream>
#include<vector>
using namespace std;

bool search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int mid=start + (end - start)/2;
        
        while(start<=end){
            if(nums[mid] == target){
            return true;
        }
        if(nums[start] == nums[mid] && nums[mid] == nums[end]){
            start++;
            end--;
        }
        else if((nums[start] <= nums[mid]) ){
              if((nums[start]<= target) && (nums[mid] > target ) ){
                end=mid-1;
              }
              else{
                start=mid+1;
              }
            }
            else{
                if((nums[mid]< target) && (nums[end]>= target)){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            mid=start + (end - start)/2;
        }
        return false;
    }

int main(){
    vector<int>arr{2,5,6,0,0,1,2};
    int target = 0;

    bool ans=search(arr,target);

    if(ans){
        cout<<"Target Found";
    }
    else{
        cout<<"Target not found";
    }

    return 0;
}