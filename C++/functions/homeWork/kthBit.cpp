#include<iostream>
using namespace std;


 int getKthBit(int n, int k){
    int mask = 1 << k;
    int ans = n | mask ;
    return ans;
 }
int main(){
    int n;
    cout<<"Enter a value of n : ";
    cin>>n;
    int k;
    cout<<"Enter a value of k : ";
    cin>>k;

    int bit=getKthBit(n , k);
    cout<<bit;

    return 0;
}