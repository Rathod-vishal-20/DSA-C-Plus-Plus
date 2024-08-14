#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findMaxConsecutiveOnes(vector<int>nums){
    int maxCount=0;
    int count =0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] == 1){
            count++;
        }
        else{
            maxCount = max(maxCount, count);
            count=0;
        }
    }
    maxCount = max(maxCount,count);
    return maxCount;
}

int main(){
    vector<int>nums{1,1,0,0,1,1,1};
    int ans = findMaxConsecutiveOnes(nums);
    cout<<"Maximum no of ones : "<<ans<<endl;
}