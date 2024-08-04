#include<iostream>
#include<string>
using namespace std;


bool checkPalindrome(string s, int start, int end){
    while(start<=end){
        if(s[start] != s[end]){
            return false;
            start++;
            end--;
    }
    return true;
}
}

bool isPalindrome(string s){
    int size= s.length();
    int start=0;
    int end=size-1;
    while(start<=end){
          if(s[start] != s[end]){
          return checkPalindrome(s,start+1,end) || checkPalindrome(s,start,end) ;
        }
        else{
           start++;
           end--;
        }
    }
    return true;
}


int main(){
    string s= "abca";
     bool find = isPalindrome(s);
    if(find){
        cout<<"It is pailndrome";

    }
    else{
        cout<<"Not palindrome";
    }
}