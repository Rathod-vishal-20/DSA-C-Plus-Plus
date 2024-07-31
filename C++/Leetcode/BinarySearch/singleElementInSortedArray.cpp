#include<iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>nums){
    int start=1;
    int n=nums.size();
    if(nums.size() == 1 ) return nums[0];
    int end=nums.size()-2;
    
    
    if(nums[0] != nums[1]) return nums[0];
    int mid= start + (end - start)/2;
    if(nums[n-1] != nums[n-2]) return nums[n-1];

    while(start<=end){
        if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
            return nums[mid];
        }
        if((mid % 2 == 1 && nums[mid-1] == nums[mid])  ||(mid %2 == 0 && nums[mid] == nums[mid+1])  ){
            start=mid+1;
        }
        else{
            end=mid-1;;
        }
         mid= start + (end - start)/2;
    }
    return 0;
}

int main(){
    vector<int>nums{1,1,2,3,3,4,4,8,8};
    int ans=singleNonDuplicate(nums);
    cout<<ans<<endl;
}