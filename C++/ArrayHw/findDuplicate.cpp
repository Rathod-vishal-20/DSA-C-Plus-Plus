#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{1,3,4,2,2};
    int low=0;
    int high=arr.size() - 1;
    for(int i=0; i<high; i++){
        if(arr[low] < arr[high]){
            low++;
        }
        else if(arr[low]> arr[high]){
            swap(arr[low],arr[high]);
            high--;
        }
    }
    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

 
    return 0;
}