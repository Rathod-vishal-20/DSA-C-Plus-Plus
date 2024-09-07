#include<iostream>
#include<string>
#include<vector>
using namespace std;

void solve(int n,int open, int close, vector<string>&ans, string output){
    if(open == 0 && close == 0){
        ans.push_back(output);
        return ;
    }

    if(open > 0){
        output.push_back('(');
        solve(n,open-1,close,ans,output);
        output.pop_back();
    }
    if(close>open){
        output.push_back(')');
        solve(n,open,close-1,ans,output);
        output.pop_back();
    }
}
int main(){
    int n =3;
    int open=n;
    int close=n;
    vector<string>ans;
    string output="";
    solve(n,open,close, ans,output);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;;
    }
}