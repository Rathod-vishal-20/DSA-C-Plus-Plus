
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

/// using brute force
int findPairs(vector<int>nums, int k){
    int n=nums.size();
     set<pair<int,int>>ans;
    int count =0;
    sort(nums.begin(),nums.end());
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if((nums[j] - nums[i]) == k){
                ans.insert({nums[i], nums[j]});
            }
        }
    }
    return ans.size();
}    


// using two pointer approach
int findPairs(vector<int>nums, int k){
    sort(nums.begin(),nums.end());
    set<pair<int,int>>ans;
    int i=0;
    int j=1;
    while(j < nums.size()){
        int diff= nums[j] - nums[i];
        if(diff == k){
            ans.insert({nums[i],nums[j]});
            ++i;
            ++j;
        }
        else if(diff>k){
            i++;
        }
        else{
            j++;
        }
        if(i==j){
            j++;
        }
    }
       return ans.size();
}

int main(){
    vector<int>nums{1,3,1,5,4};
    int k=0;

    int findAns= findPairs(nums, k);
    cout<<findAns;
}