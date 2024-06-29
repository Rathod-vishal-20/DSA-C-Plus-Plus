#include<iostream>
#include<limits.h>
using namespace std; 
int main(){
    // int arr[] = {1,2,3,4,5,6,7,8};
    int arr[] = {10,20,30,40,50,60,70,80};
    int size = 8;
    int start=0;
    int end=size-1;
    
    for(int i=0; i<size ; i++){
        if(arr[start] <= arr[end]){
            if(arr[start] == arr[end]){
                cout<<arr[start];
                break;
            }
            else{
                 cout<< arr[start] <<" ";
                cout<< arr[end] <<" ";
                 start++;
                end--;
            }
        
       
        }
        
    }
}