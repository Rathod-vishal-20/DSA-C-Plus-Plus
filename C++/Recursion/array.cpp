#include<iostream>
#include<limits.h>

using namespace std;

// void print(int arr[], int n, int i){
//     if(i >= n) return ;
//     cout<<arr[i] <<" ";
//     print(arr,n,i+1);
// }

void findMax(int arr[], int n, int i, int& maxi){
    if(i >= n){
        return ;
    }
    if(arr[i] > maxi){
        maxi=arr[i];
    }
      findMax(arr, n, i + 1 ,maxi );
}

void findMini(int arr[], int n , int i ,int& mini){
    if( i == n){
        return ;
    }
     mini = min(mini,arr[i]);

    findMini(arr, n , i+1 , mini);
}

int main(){
    int arr[8] = {10,50,55,71,69,21,40,30};
    int n=8;
    int i=0;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    // print(arr,n,i);
    findMax(arr, n , i, maxi);
    cout<<maxi<<endl ;
    findMini(arr,n,i,mini);
    cout<<mini;
}