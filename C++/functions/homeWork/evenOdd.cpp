#include<iostream>
using namespace std;

    bool checkEven(int n){
        if(n % 2 == 0){
            return true;
        }
        else{
            return false;
        }
    }

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    bool isEven= checkEven(n);
    if(isEven == true){
        cout<< n <<" is even number " << endl;
    }
    else{
        cout<< n <<" is odd number " << endl;
    }
}