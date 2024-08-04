#include<iostream>
#include<vector>
using namespace std;

string convert(string s, int numRow){
    int n=s.length();
    for(int i=0; i<n-1; i++){
        for(int j=0; j<numRow ; j++){
            cout<<s[i];
        }
    }
}

int main(){
    string s="PAYPALISHIRING";
    int numRow = 3;

    string ans=convert(s,numRow);
    cout<<ans;
}