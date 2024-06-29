#include<iostream>
#include<limits.h>
using namespace std; 

int main(){
    int arr[] ={10,20,30,40,50,60 ,80};
    int size=7;
    int start=0;
    int end=size-1;
   
   // My code 
    // for(int i=0; i<size; i++){
        
    //     int start= arr[i];
    //      arr[i]== arr[end] ;
    //      arr[end] ==arr[i];
        

    //      cout<<arr[end]<<" ";
    //      end--;
        
    //     // cout<<arr[end] <<" ";
    //     // end--;
    // }

    // Babbar code
    // while(start<end){
    //     swap(arr[start] , arr[end]);
    //     start++;
    //     end--;
    // }

    // for(int i=0; i<size ; i++){
    //     cout<<arr[i] <<" ";
    // }

    while(start<end){
        swap(arr[start], arr[end] );
        start ++;
        end--;
    }
     for(int i=0; i<size ; i++){
        cout<<arr[i] <<" ";
    }
}