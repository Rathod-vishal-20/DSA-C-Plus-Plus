#include<iostream>
#include<vector>
using namespace std;

int removeDuplicate(vector<int>nums){
    int i=0;
   
    for(int j=1; j<nums.size(); j++){
        if(nums[j] != nums[i]){
            nums[i+1] = nums[j];
            i++;
        }
    }
    
    return i+1;
}

int main(){
    vector<int>nums{1,1,2};
    int ans=removeDuplicate(nums);
    cout<<ans;
}


