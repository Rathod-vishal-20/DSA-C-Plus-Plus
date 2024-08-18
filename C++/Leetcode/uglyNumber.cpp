#include<iostream>
using namespace std;

bool isUgly(int n){
    if( n <= 0 ) return false;
    if(n == 1) return true;

    while(n % 2 == 0) {
        n = n/2;
    }
    while(n % 3 == 0){
        n = n/3;
    } 
    while(n % 5 == 0){
        n = n/5;
    }
    if(n != 1) return false;
    else return true;
}

int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    bool ans = isUgly(n);
    if(n){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}