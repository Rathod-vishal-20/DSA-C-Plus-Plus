#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

vector<vector<int>>threeSum(vector<int>nums){

    set<vector<int>>ans;
    sort(nums.begin(),nums.end());
    vector<vector<int>>threeSum15;
    int n= nums.size();
    int target=0;
    for(int i=0; i<n ; i++){
        int j=i+1;
            int k=n-1;
            while(j<k){
                int sum= nums[i]+nums[j]+nums[k];
                if(sum == target){
                    ans.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum < target){
                    j++;
                }
                else{
                    k--;
                }
            }
            
        
    }
    for( auto triplet : ans){
        threeSum15.push_back(triplet);
    }
    return threeSum15;
}

int main(){
    vector<int>nums{-1,0,1,2,-1,-4};
    vector<vector<int>>ans=threeSum(nums);
       for ( auto triplet : ans) {
        cout << "[";
        for (size_t i = 0; i < triplet.size(); i++) {
            cout << triplet[i];
            if (i < triplet.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }
    
}


