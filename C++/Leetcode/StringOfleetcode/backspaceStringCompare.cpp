#include<iostream>
#include<string>
using namespace std;

    bool backspaceCompare(string s, string t){
        for(int i=0; i<s.length(); i++){
            if(s[i] == '#'){
                if(i > 0){
                    s.erase(i-1,2);
                    i = i-2;
                }
                else{
                    s.erase(i,1);
                    i--;
                }
            }
        }

         for(int i=0; i<t.length(); i++){
            if(t[i] == '#'){
                if(i > 0){
                    t.erase(i-1,2);
                    i = i-2;
                }
                else{
                    t.erase(i,1);
                    i--;
                }
            }
        }

        if(s == t){
            return true;
        }

        return false;
    }
int main(){
    string s = "ab#c";
    string t = "ad#c";
    
    bool ans = backspaceCompare(s, t);
    if(ans){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}