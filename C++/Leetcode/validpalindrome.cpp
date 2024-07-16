#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


bool isPalindrome(string s){
    int size=s.length();
    string str;
    for(int i=0; i<size; i++){
        if(isalnum(s[i])){
            str.push_back(tolower(s[i]));
        }
        if(s[i] <= 0 && s[i] <= 9){
            return false;
        }
    }
    cout<<str << endl;
    int start = 0;
    int end=str.length()-1;
    while(start <= end){
        if(str[start] == str[end] ){
            start++;
            end--;
        }
        else{
            return false;
        }
    }

    return true;
}


int main(){
    string s="A man , a plan , a canal : Panama";
    

    
    bool ans=isPalindrome(s);
    if(ans){
        cout<<"It is Palindrome";
    }
    else{
        cout<<"It is not palindrome";
    }
    
    return 0;
}