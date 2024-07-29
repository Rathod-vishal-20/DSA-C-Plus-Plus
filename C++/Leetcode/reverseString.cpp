#include<iostream>
#include<vector>
using namespace std;

    void reverseString(vector<char>s){
        int start=0;
        int end=s.size();
        while(start<=end){
            swap(s[start] , s[end]);
            start++;
            end--;
        }
        for(int i=0; i<=s.size(); i++){
            cout<<s[i]<<" ";
        }
    }
int main(){
    vector<char>s{'h','e','l','l','o'};
    reverseString(s);

}