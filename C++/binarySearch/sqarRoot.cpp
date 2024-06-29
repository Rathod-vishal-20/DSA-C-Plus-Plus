#include<iostream>
#include<vector>
using namespace std;


int findSqrt(int n){
    int target=n;
    int start=0;
    int end= n-1;
    int mid=start+(end-start)/2;
      int ans=0;
    while(start<=end){
      
        if(mid*mid == target){
            return mid;
        }
        else if(mid*mid > target){
            end= mid - 1;
        }
        else{
            ans= mid;
            start= mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter number " << endl;;
    cin>>n;
    

    int ans= findSqrt(n);
    cout<<"Ans is :"<<ans <<endl;
    double finalAns= ans;
    int precision;
    cout<<"Enter number of floating digits "<<endl;
    cin>>precision;
    double step=0.1;
    for(int i=0 ; i<precision ;i++){
        for(double j = finalAns ; j*j<=n ;j=j+step){
            finalAns = j;
        }
     step = step/10;
    }
    cout<<"Final Ans : "<<finalAns<<endl;
    
}