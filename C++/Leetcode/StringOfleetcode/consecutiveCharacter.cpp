#include<iostream>
#include<string>
using namespace std;

int maxPower(string s){
    int count=0;
    int maxCount=1;
    for(int i=0; i<s.size(); i++){
        if(s[i]==s[i+1]){
            count++;
        }
        else{
            maxCount=max(maxCount,count);
            count=1;
        }
    }
    maxCount=max(maxCount,count);
    return maxCount;
}

int main(){
    string s="leetcode";
    int ans = maxPower(s);
    cout<<"Consecutive Character is : "<<ans<<endl;
}