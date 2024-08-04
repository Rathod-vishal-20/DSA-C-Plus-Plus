#include<iostream>
using namespace std;

int climbStairs(int n){

    if( n == 1) return 1;
    if( n == 2) return 2;

    int ans = climbStairs(n-1) + climbStairs(n-2);
    return ans;
} 

int main(){
    int n;
    cout<<"Enter a value of n : ";
    cin>>n;

    int ans = climbStairs(n);
    cout<<"No of Ways : "<<ans<<endl;
}