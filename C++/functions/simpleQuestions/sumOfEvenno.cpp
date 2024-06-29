#include<iostream>
using namespace std;


    // int getSum(int n){
    //        int start=0;
    //      for(int i=1; i<=n; i++){
    //          start = start+i;
    //     }
    //        return start;
    // }
    

    int getEvenSum(int n){
        int sum = 0;
     for(int i=0; i<=n ; i++){
        if(i % 2 == 0){
            sum= sum+i;
        }
     }
     return sum;
    }


int main(){
    int n;
    cout<<"Enter a value of n:";
    cin>>n;
    

    // int ans= getSum(n);
    // cout<<"Sum up to " << n <<" is " << ans <<endl;
    int ans= getEvenSum(n);
    cout<< "Sum of Even number " << n << " is " << ans << endl;
}