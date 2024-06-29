#include<iostream>
using namespace std;
#include<vector>

int solve(int dividend, int divisor){
    int start=0;
    int end=dividend;
    int mid=start+(end-start)/2;
    int ans=0;
    while(start<=end){
        if(abs(mid*divisor) == abs(dividend)){
            ans= mid;
        }
        else if(abs(mid * divisor) > abs(dividend)){
           
            end=mid-1;

        }
        else{
            ans=mid;
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    if((dividend<0 && divisor<0) || (dividend>0 && divisor>0) ){
            return ans;
    }
    else{
        return -ans;
    }

}

int main(){
     int dividend=22;
        int divisor=-7;
   
   int ans=solve(dividend, divisor);
   cout<<"Ans is : "<<ans<<endl;

}