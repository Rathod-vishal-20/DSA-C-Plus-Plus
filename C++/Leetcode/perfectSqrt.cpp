#include<iostream>
#include<vector>
using namespace std;

bool isPerfectSquare(int num){
    int start=0;
    int end=num-1;
    int mid = start + (end - start)/2;
    while(start<=end){
        if(mid*mid == mid * mid){
            return true;
        }
         mid = start + (end - start)/2;
    }
    return false;
}

int main(){
    int num;
    cout<<"Enter a value : ";
    cin>>num;

    bool ans = isPerfectSquare(num);
    cout<<"Ans is : "<<ans;



}