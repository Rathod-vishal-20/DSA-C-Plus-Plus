#include<iostream>
#include<vector>
using namespace std;

int findFirtstOcc(vector<int>arr, int target){
    
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid] == target){
            ans=mid;
            end=mid-1;
        }
        else if(target> arr[mid]){
            start=mid+1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;

}
int findLastOcc(vector<int>arr, int target){
    int size= arr.size() - 1;
    int start=0;
    int end=size;
    int mid= start + (end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid] == target){
            ans=mid;
            start=mid+1;

        }
        else if(target> arr[mid]){

            start=start+mid;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        mid= start + (end-start)/2;
    }
    return ans;

}

int main(){
    vector<int>arr{1,2,4,4,4,4,4,4,4,5,6,7};
    int target=4;
    int indexOfFirstOcc=findFirtstOcc(arr,target);
    cout<<"The Occurence at index :" <<indexOfFirstOcc<<endl;
    int indexOfLastOcc=findLastOcc(arr,target);
    cout<<"The Occurence at index:"<<indexOfLastOcc<<endl;

    int lastOcc= (indexOfLastOcc - indexOfFirstOcc) +1;
    cout<<"Total no of occurance : "<<lastOcc;

    return 0;

}
