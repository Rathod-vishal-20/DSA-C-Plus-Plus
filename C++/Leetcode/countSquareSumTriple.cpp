#include<iostream>
using namespace std;

int countTriples(int n){
        int ans=0;
        for(int i=1; i<=n ; i++){
            for(int j=1; j<=n; j++){
                for(int k=1; k<=n; k++){
                    if((i*i)+(j*j) == (k*k)){
                     ans=ans+1;
                    }
                }
            }
        }
        return ans;    
}

int main(){
    int n=5;
    int ans=countTriples(n);
    cout<<ans<<endl;
}