#include<iostream>
using namespace std;
#include<vector>

int lastOccurance(vector<int>arr, int target){
    int start=0;
    int end=arr.size()-1;
    int mid=start + (end - start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid] == target){
            ans=mid;
            start = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid -1;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
        mid=start + (end - start)/2;
    }
    return ans;
}

int main(){
    vector<int>arr{1,3,7,7,7,7,7,7,7,7,7,7,7,7,9};
    int target =3;
    int indexOfLastOcc= lastOccurance(arr , target);
    cout<<"Last Occurance is :" << indexOfLastOcc <<" ";

}