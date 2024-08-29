#include<iostream>
#include<string>
using namespace std;

int lenghtOfLastWord(string s){
    int count =0;
    int i = s.size()-1;
    while(i>=0 && s[i]==' '){
        i--;
    }
    while(i>=0 && s[i]!=' '){
        count++;
        i--;
    }
    return count;
}

int main(){
    string s = "Hello world  ";
    int find = lenghtOfLastWord(s);
    cout<<"Lenght of the last word is : "<<find<<endl;
}