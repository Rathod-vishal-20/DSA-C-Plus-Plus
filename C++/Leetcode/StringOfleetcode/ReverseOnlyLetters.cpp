#include<iostream>
#include<string>
#include <cctype>
using namespace std;

    string reverseOnlyLetters(string s){
        int n= s.length();
        int start=0;
        int end=n-1;
        while(start<=end){
           if( !isalpha(s[start])){
            start++;
           }
           else if(!isalpha(s[end])){
            end--;
           }
           else{
            swap(s[start],s[end]);
            start++;
            end--;
           }
        }
    return s;
    }

int main(){
    string s = "Test1ng-Leet=code-Q!";

    string ans=reverseOnlyLetters(s);
    cout<<ans;
}