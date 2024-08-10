#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


    string firstPalindrome(vector<string>words){
        for(int i=0; i<words.size(); i++){
            string reverseWords = words[i];
            reverse(reverseWords.begin(), reverseWords.end());
            if(words[i] == reverseWords){
                return words[i];
            }
        }
        return "";
    }
int main(){
    vector<string>words{"abc","car","ada","racecar","cool"};
    string ans = firstPalindrome(words);
    cout<<"First Palindromic String is : "<<ans<<endl;
}