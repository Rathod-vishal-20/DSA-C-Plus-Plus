#include<iostream>
using namespace std;

// int factorial(int n){
//     cout<<n<<endl;
//     // base case
//     if(n == 1) return 1;

//     // recursion 
//     int chotiProblem = factorial(n-1);
//     int badiProblem  = n * chotiProblem;
    
//     return badiProblem;
// }

// counting 

void printCounting(int n){
    // base case
    if(n == 0){
        return ;
    }

    // processing 
    cout<<n<<" ";
    // recursive call
    printCounting(n-1);


}

int main(){
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;

    // int ans=factorial(n);
    printCounting(n);
    // cout<<"The fact is  : "<<ans<<endl;
}