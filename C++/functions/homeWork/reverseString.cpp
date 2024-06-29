#include<iostream>
using namespace std;

    int getReverse(int x){
        
        int ans=0;

        while(x > 0){
            int digit= x % 10;
            ans = ans * 10 + digit;
            x = x / 10;
        }
        return ans;

    }

int main(){

     int n;
    cout<<"Enter a valur of n : ";
    cin>>n;

    int rev=getReverse(n);
    cout<< rev;
    return 0;
}