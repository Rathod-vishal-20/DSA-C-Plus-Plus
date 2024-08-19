#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool isVowels(char c){
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
    c=='A' || c =='E' || c=='I' || c=='O' || c== 'U';
}

string sortVowels(string s){
    string t="";
    for(int i=0; i<s.size(); i++){
        if(isVowels(s[i])){
            t.push_back(s[i]);
        }
    }
    sort(t.begin(),t.end());
    int j=0;
    for(int i=0; i<s.size(); i++){
        if(isVowels(s[i])){
            s[i] = t[j];
            j++;
        }
        
    }
    return s;
}

int main(){
    string s="lEetcOde";
    string ans = sortVowels( s);
    cout<<"String is : "<<ans<<endl;
}