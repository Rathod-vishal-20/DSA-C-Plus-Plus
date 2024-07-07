#include<iostream>
#include<vector>
#include<string>
using namespace std;

string removeOccurances(string s, string part){
    int pos=s.find(part);
    while(pos != string::npos){
        s.erase(pos, part.length());
        pos=s.find(part);
    }
    return s;

}

int main(){
    string s="daabcbaabcbc";
    string part="abc";

    string find=removeOccurances(s,part);
    cout<<"Without Occurance : "<<find;
}