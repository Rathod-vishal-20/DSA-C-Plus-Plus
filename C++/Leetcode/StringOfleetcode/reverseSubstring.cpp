
#include<iostream>
#include<string>
using namespace std;


string reverseParentheses(string s){
   int n=s.length();
   string ans;
   int start=0;
   int end=n-1;

   while(start<=end){
    if(s[start] != '(' && s[start] != ')'){
        ans.push_back(s[start]);
    }
    start++;
   }
   cout<<ans<<endl;
    int start=0;
   end=ans.length()-1;
   while(start<=end){
    swap(ans[start],ans[end]);
    start++;
    end--;
   }

   return ans;
}

int main(){
    string s ="(u(love)i)";

    string ans = reverseParentheses(s);
    cout<<ans;
}
