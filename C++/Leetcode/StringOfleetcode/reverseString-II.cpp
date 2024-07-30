#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

string reverseStr(string s, int k){

    vector<char>ans(s.begin(), s.end());
    for(int i=0; i<s.length(); i = i+ 2 * k){
    int start=i;
    int end=min(i+k-1, (int)s.length()-1);
    while(start<=end){
        swap(ans[start],ans[end]);
        start++;
        end--;

    }
    }
    string rev(ans.begin(), ans.end());
 
    return rev;
}

int main(){
    string s = "abcdefg";
    int k = 2;
    string ans=reverseStr(s,k);
    cout<<"Output is : "<<ans;
}