#include<iostream>
#include<string>
using namespace std;

string sortString(string s){
    int a[26]={0};
    string ans="";
    for(int i=0; i<s.size(); i++){
        a[s[i] - 'a']++;
    }

    while(ans.size() < s.size()){
        // for increasing order 
        for(int i=0; i<26; i++){
            if(a[i] > 0){
                ans.push_back( 'a' + i);
                a[i]--;
            }
        }

        // for decreasing order
        for(int i=25; i>=0; i--){
            if(a[i] > 0){
                ans.push_back('a' + i);
                a[i]--;
            }
        }
    }
    return ans;
}

int main(){
    string s = "aaaabbbbcccc";
    string ans = sortString(s);
    cout<<"Sorted String is : "<<ans<<endl;
}