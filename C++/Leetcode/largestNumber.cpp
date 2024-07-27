#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;


static bool mycomp(string a , string b){
    string t1=a+b;
    string t2=b+a;
    return t1 > t2;
}

string largestNumber(vector<int>nums){
    vector<string>snums;
    for(auto n:nums){
        snums.push_back(to_string(n));
    }
    sort(snums.begin(),snums.end(), mycomp);
    if(snums[0] == "0"){
        return "0";

    }
    string ans="";
    for(auto str:snums){
        ans=ans+str;
    }
    return ans;
}

int main(){
    vector<int>nums{9,33,34,5};
    string ans= largestNumber(nums);
    for(int i=0; i<ans.length(); i++){
        cout<<ans[i]<<' ';
    }
    return 0;
}