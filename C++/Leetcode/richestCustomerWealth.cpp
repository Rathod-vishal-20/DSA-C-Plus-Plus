#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts){
        int ans = INT_MIN;
        for(int i=0; i<accounts.size(); i++){
            int sum = 0;
            for(int j=0; j<accounts[0].size(); j++){
               sum = sum + accounts[i][j];
            if(sum > ans){
                ans = sum;
            }
        }
        }
        return ans;   
}

int main(){
    vector<vector<int>>accounts{
        {1,2,3},
        {3,2,1}
    };
    int ans = maximumWealth(accounts);
    cout<<"Maximum wealth is : "<<ans<<endl;
}