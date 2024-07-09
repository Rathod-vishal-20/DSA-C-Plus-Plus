#include<iostream>
#include<string>
#include <algorithm>
using namespace std;


// brute force method

bool isAnagram(string s, string t){
    int n= s.length();
    int m=t.length();
    if(n != m){
       
        return false;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if(s != t){
      
        return false;
       
    }
    
    return true;
}

int main(){
    string s = "rat";
    string t = "cat3";

    bool find = isAnagram(s,t);
    if(find){
        cout<<"True";
    }
    else{
        cout<<"false";
    }

}




/// counting 

bool isAnagram(string s, string t){
    int frequency[256]= {0};
   for(int i=0 ; i<s.length(); i++){
    frequency[s[i]]++;

   }

   for(int i=0 ; i<t.length(); i++){
    frequency[t[i]]--;

   }
   for(int i=0 ; i<256; i++){
    if(frequency[i] != 0){
        return false;
    }

   }
   return true;
}
int main(){
    string s = "anagram";
    string t = "nagaram";

    bool find = isAnagram(s,t);
    if(find){
        cout<<"True";
    }
    else{
        cout<<"false";
    }
}
