#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int strStr(string haystack , string needle){

    int n=needle.length();
    if(n == 0){
        return 0;
    }
    for(int i=0; i<haystack.length(); i++){
        for(int j=0; j<needle.length(); j++){
            
            if(needle[j] != haystack[i+j]){
                
                break;
    
        }
        if(j== n -1){
            return i;
        }
        }
    }
    return -1;
}

int main(){
    string haystack ="sadbutsad";
    string needle ="sad";
    

    int ans=strStr(haystack, needle);
    cout<<ans;
}