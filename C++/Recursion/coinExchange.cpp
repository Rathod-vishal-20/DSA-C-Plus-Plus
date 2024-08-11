#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


int coinExchange(vector<int>arr, int target){
    int n = arr.size();
    // base
    if(target == 0){
        return 0;  
    }
    if(target < 0){
        return INT_MAX;
    }
    int mini = INT_MAX;
    for(int i=0; i<n; i++){
    int ans = coinExchange(arr, target-arr[i]);
    if(ans != INT_MAX){
         mini = min(mini, ans+1);
    }
   }
   return mini;


}


int main(){
    vector<int>arr{1,2};
    int target = 5;
    
    int ans = coinExchange(arr, target);
    cout<<"Answer is : "<<ans<<endl;
}