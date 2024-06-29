#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{0,10,5,2};
    int size= arr.size();
    int start=0;
    int end=size-1;
    int mid=start +(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start +(end-start)/2;
        
    }
    
   cout<<arr[end];
}