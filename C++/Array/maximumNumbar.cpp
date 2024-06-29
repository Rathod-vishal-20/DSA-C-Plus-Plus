#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[]= {-2,-4,-1,0-6,-8,229,-19};
    int size=7;
    int maxNum=INT_MIN;
    int minNum = INT_MAX;

    for(int i=0; i<size ; i++){

        // for the maxNumber 
        if(maxNum < arr[i]){
            maxNum = arr[i];
        }

        // for the minNumber
        if(minNum > arr[i]){
            minNum = arr[i];
        }
        
        
    }
    cout<<"Maximum number in an array :" << maxNum <<" " <<endl;
    cout<<"Minimum nuber un an array: "<<minNum <<" " <<endl;
    return 0;
}

