#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int rangeSum(vector<int>nums , int n, int left, int right){
    int size = nums.size();
    vector<int>ans;
    for(int i=0; i<size; i++){
        int sum=0;
        for(int j=i; j<size; j++){
            sum += nums[j];
            ans.push_back(sum);
        }
    }

    sort(ans.begin(),ans.end());
    int result = 0;
    int MOD = 10000007;
    for(int i=left-1; i<right; i++){
        result = (result + ans[i] ) % MOD;
    }
    return result;
}

int main(){
    vector<int>nums{1,2,3,4};
    int n=4;
    int left=1;
    int right = 5;

    int ans = rangeSum(nums, n, left, right);
    cout<<ans;

}