#include<iostream>
using namespace std;


bool checkPrime(int n){
   for(int i =2 ; i<n ; i++){
    if(n % i ==0){
        return false;
    }
   
   }
   return true;
}

int main(){
    int n;
    cout<<"Enter a valur of n : ";
    cin>>n;
    bool isPrime = checkPrime(n);
    if(isPrime){
        cout<<" Prime number ";
    }
    else{
        cout<<"Not a prime ";
    }
}