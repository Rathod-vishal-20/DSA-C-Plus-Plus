#include<iostream>
#include<vector>
using namespace std;
    void backtracking(int n, int k, int start, vector<vector<int>>&combination,vector<int>&kcombine){
        if(k == 0){
            combination.push_back(kcombine);
            return ;
        }
        for(int i=start; i<=n; i++){
            kcombine.push_back(i);
            backtracking(n,k-1,i+1, combination, kcombine);
            kcombine.pop_back();

        }
    }
    vector<vector<int>> combine(int n, int k){
        vector<vector<int>>combination;
        vector<int>kcombine;
        backtracking(n,k , 1 , combination,kcombine);

        return combination;
    }
int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;

    int k;
    cout<<"Enter a number of  K : "<<endl;
    cin>>k;
    vector<vector<int>>ans = combine(n,k);
    for(int i=0; i<ans.size();i++){
        for(int j=0; j<ans[0].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}