#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
    int maxSubArray(vector<int>& nums) {
        int result=INT16_MIN;
        vector<vector<int>>ans;
        for(int i=0; i<nums.size(); i++){
            for(int j=i; j<nums.size(); j++){
                vector<int>Subarray;
                for(int k=i; k<=j ; k++){
                    Subarray.push_back(nums[k]);
                }
                ans.push_back(Subarray);
                
            }
        }
    for(int i=0; i<ans.size(); i++){
        int sum=0;
        for(int j=0; j<ans[i].size(); j++){
            sum+=ans[i][j];
        }
        if(result<sum){
            result = sum;
        }
        cout<<" ";
    }
        for(int i=0; i<ans.size(); i++){
        
        for(int j=0; j<ans[i].size(); j++){
          cout<<ans[i][j];  
        }
      cout<<endl;
    }
       return result; 
    }

int main(){
    vector<int>nums{-2,1,-3,4,-1,2,1,-5,4};
    int ans =maxSubArray(nums);
    cout<<endl;
    cout<<"The total no of Sum is : "<<ans;
    return ans;
}