#include<iostream>
#include<string>
using namespace std;

bool checkKey(string str, int n, int i, char key){
    // base case
    if(i == n) return false;
    // 1 case solve karro
    if(str[i] == key){
        cout<<"Found at : "<<i<<endl;
    }

   return checkKey(str,n,i+1,key);
    
}
int main(){
    string str = "vishalrathod";
    int n = str.length();
    int i=0;
    char key = 'a';
    bool ans = checkKey(str , n, i,key);
    cout<<ans;
}