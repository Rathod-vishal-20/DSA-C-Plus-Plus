#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void addRE(string& num1, int p1, string& num2, int p2, string& ans , int carry){
    if(p1 < 0 && p2< 0){
        if(carry != 0){
            ans.push_back(carry+'0');
        }
        return ;
    }

    // first case
    int n1 = (p1>=0 ? num1[p1] : '0' ) - '0';
    int n2 = (p2 >=0 ? num2[p2] : '0') - '0';
    int csum = n1+n2 + carry;
    int digit = csum % 10;
    carry = csum / 10;
    ans.push_back(digit + '0');

    addRE(num1, p1-1, num2, p2-1, ans, carry);
}

string addStrings(string& num1, string&num2){
    string ans="";
    addRE(num1, num1.size()-1, num2, num2.size()-1, ans ,  0);
    return ans;

}

int main(){
    string num1="11";
    string num2 = "123";

    string ans = addStrings(num1, num2);
    reverse(ans.begin(), ans.end());
    cout<<ans;
}