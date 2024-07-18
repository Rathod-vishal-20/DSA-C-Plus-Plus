#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int missingNumber(vector<int>nums){

    sort(nums.begin(), nums.end());
    
    int n=nums.size();
     for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
     }
     cout<<endl;
    for(int i=0; i<n; i++){
      
       if(nums[i] != i){
        return i;
       }
    }

    return n;
}

int main(){
   vector<int>arr{0,1};
   int ans=missingNumber(arr);
   cout<<"Missing Number is : "<<ans<<endl;
}