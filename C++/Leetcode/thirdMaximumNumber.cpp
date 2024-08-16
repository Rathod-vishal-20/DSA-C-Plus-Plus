#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;


int thirdMax(vector<int>& nums){
    sort(nums.begin(),nums.end(),greater<int>());
    vector<int>ans;
    for(int i=0; i<nums.size(); i++){
        if(ans.empty() || nums[i]!=ans.back()){
        ans.push_back(nums[i]);
        }

    }
    int n=ans.size();
    if(n>=3){
        return ans[2];
    }
    else{
        return ans[0];
    }
    return 0;
}

int main(){
    vector<int>nums{1,2,2,5,3,5};
    int ans = thirdMax(nums);
    cout<<"Third Maximum is :"<<ans;
}