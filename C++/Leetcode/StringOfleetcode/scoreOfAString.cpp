#include<iostream>
#include<string>
using namespace std;

int scoreOfString(string s){
    int score = 0;
    for(int i=0; i<s.size()-1; i++){
        score += abs(s[i]-s[i+1]);
    }
    return score;
}

int main(){
    string s = "hello";
    int score = scoreOfString(s);
    cout<<"The score is : "<<score<<endl;
}