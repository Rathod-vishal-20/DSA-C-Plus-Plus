#include<iostream>
#include<vector>
using namespace std;

int countPrimes( int n){
    vector<bool>primes(n , true);
    if( n == 0) return false;
    primes[0] = primes[1] = false;
    int ans=0;
    for(int i=0; i<n; i++){
        if(primes[i]){
            ans++;

            int j=2*i;
            while(j<n){
                primes[j] = false;
                j=j+i;
            }
        }
    }
    return ans;
}

int main(){
    int n=10;
    int ans=countPrimes(n);
    cout<<ans;
}