#include<iostream>
using namespace std;

bool sortedArr(int arr[], int i, int& n){
    if(i == n-1){
       return true ;
    }
    if(arr[i] < arr[i-1]){
        return false;
    }

    sortedArr(arr, i+1, n);
    

}

int main(){
    int arr[10] = {1,5,3,46,79,8,5,6,5,2};
    //int arr[10] ={10,20,30,40,50,60};
    int n=10;
    int i=1;
    bool ans = sortedArr(arr, i,n);
    if(ans){
        cout<<"True";
    }else{
        cout<<"False";
    }
}