#include<iostream>
using namespace std;

bool isPerfectSquare(int n){
    int target = n;
    int start=0;
    int end=n-1;
    int mid = start + (end - start)/2;
    if(n == 1){
        return true;
    }

    while(start<=end){
        if(mid*mid == target){
            return true;
        }
        else if(mid*mid < target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid = start + (end - start)/2;
        
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;

    bool ans = isPerfectSquare(n);
    if(ans){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}