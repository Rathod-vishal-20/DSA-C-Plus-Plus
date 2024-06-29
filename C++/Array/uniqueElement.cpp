#include<iostream>
using namespace std;
int main(){
    int arr[]={2,2,1};
    int size=3;
    int end = size - 1;
    
    for(int i=0; i<size; i++){
        for(int j=1; j<size ; j++){
               if(arr[i] != arr[j]){
            cout<<"Uinque element: "<<arr[i]<<endl;
        }
        }
        
        
    }
}