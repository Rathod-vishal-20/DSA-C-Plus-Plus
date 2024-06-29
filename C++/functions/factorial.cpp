#include<iostream>
using namespace std;

   long long   int getFactorial( long long int n){
       long long  int fact=1;
        for(int i=1; i<=n ; i++){
            fact = fact * i;
        }
        return fact ;

    }

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    long long int fact= getFactorial(n);
    cout<<" The factorial of " <<n<< " is : "<< fact << endl;
}
