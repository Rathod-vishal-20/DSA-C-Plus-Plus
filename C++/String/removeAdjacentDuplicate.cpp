#include<iostream>
#include<string>
using namespace std;

string removeDuplicates(string s){
    string ans="";
    int size=s.length();
    for(int i=0; i<size; i++){
        if(ans.length()-1 >= 0){
            if(ans[ans.length()-1 ]== s[i]){
            ans.pop_back();
        }
        else{
            ans.push_back(s[i]);
        }
        }
        else{
            ans.push_back(s[i]);
        }
        
    }
    return ans;
}

int main(){
    string s="azxxzy";
    //cout<<s;
    string ans=removeDuplicates(s);

    cout<<ans;
}

