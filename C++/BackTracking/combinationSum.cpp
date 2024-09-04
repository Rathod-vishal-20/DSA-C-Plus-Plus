#include<iostream>
#include<vector>
using namespace std;

void backtracking(vector<int>&candidates, int target, int start, vector<int>combination, vector<vector<int>>&result){
    if(target == 0){
        result.push_back(combination);
        return;
    }
    if(target < 0){
        return ;
    }
    for(int i=start; i<candidates.size(); i++){
        combination.push_back(candidates[i]);
        backtracking(candidates,target-candidates[i], i, combination, result );
        combination.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>&candidates,int target){
    vector<int>combination;
    vector<vector<int>>result;
    backtracking(candidates, target, 0, combination, result);
    return result;

}

int main(){
    vector<int>candidates{2,3,6,7};
    int target = 7;
    vector<vector<int>>ans = combinationSum(candidates,target);
    for(auto &combination : ans){
        for(int num:combination){
            cout<<num<<" ";
        }
        cout<<endl;
    }
}