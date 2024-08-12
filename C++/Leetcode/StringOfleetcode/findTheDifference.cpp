#include<iostream>
#include<string>
using namespace std;

char findTheDifference(string s, string t){
    char ans ='\0';
    for(int i=0; i<s.size(); i++){
        ans = ans ^ s[i];
    }
    for(int i=0; i<t.size(); i++){
        ans = ans ^ t[i];
    }
    return ans;

}

int main(){
    string s="abcd";
    string t="abcde";

    char ans = findTheDifference(s, t);
    cout<<"The extra element is : "<<ans<<endl;
}