#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findClosestElements(vector<int>arr, int k, int x){
    vector<int>data;
    sort(arr.begin(),arr.end());
    
    int start=0; int end=arr.size()-1;
    while(end - start >= k){
        if(x-arr[start] > arr[end]-x){
            start++;
        }
        else{
            end--;
        }
    }
    for(int i=start; i<=end; i++){
        data.push_back(arr[i]);
    }
    return data;
}

int main(){
    vector<int>arr{1,1,1,10,10,10};
    int k=1;
    int x=9;
    vector<int>ans =findClosestElements(arr,k,x);
    for(int i=0; i<ans.size(); i++){
        if(i<k){
            cout<<ans[i]<<" ";
        }
    }
}