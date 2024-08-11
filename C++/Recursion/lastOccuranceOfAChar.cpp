#include<iostream>
#include<vector>
#include<string>
using namespace std;

void lastOccLR(string& str, int i, char x, int& ans){
    if(i >= str.size()){
        return ;
    }
    if(str[i] == x){
        ans = i;
    }
    lastOccLR(str, i+1, x, ans);

}

void lastOccRL(string str, int i, char x, int& ans){
    if(i < 0){
        return;
    }
    if(str[i] == x){
        ans = i;
        return;
    }
    lastOccRL(str, i-1, x, ans);
}

int main(){
    string str = "abcddedg";
    char x = 'd';
    int i=0;
    int ans = -1;
    lastOccLR(str, i , x,ans);
    cout<<"Left to right "<<ans<<endl;
    // int i=str.size()-1;
    lastOccLR(str, str.size()-1 , x,ans);
    cout<<"Right to left "<<ans<<endl;

}