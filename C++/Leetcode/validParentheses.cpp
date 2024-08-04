#include<iostream>
#include<string>
using namespace std;

bool isValid(char ch){
    return ch == '('|| ch==')' || ch=='[' || ch==']' || ch=='{' ||  ch=='}' ;
}

bool validParentheses(string s){
    int n=s.length();
    for(int i=0; i<n; i++){
        if(isValid(s[i])){
            return true;
        }
    }
    return false;
}

int main(){
    string s="()";
    bool ans=validParentheses(s);
    cout<<ans;
}