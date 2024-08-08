#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int cutSegment(int n, int x, int y, int z){
    // base case
    if(n == 0){
        return 0;
    }
    if(n < 0){
        return INT_MIN;
    }

    int ans1=cutSegment(n-x,x,y,z)+1;
    int ans2=cutSegment(n-y,x,y,z)+1;
    int ans3=cutSegment(n-z,x,y,z)+1;

    int ans = max(ans1, max(ans2,ans3));
    return ans;

}

int main(){
    int n=7;
    int x=5;
    int y=2;
    int z=2;
    int ans = cutSegment(n,x,y,z);
    cout<<"Answer is : "<<ans<<endl;
    return 0;
}