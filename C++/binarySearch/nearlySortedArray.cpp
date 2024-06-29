#include<iostream>
#include<vector>
using namespace std;

int getTarget(vector<int>arr,int size,int target){
    int start=0;
    int end=size;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid] == target){
            return mid;
        }
        if(mid-1 >= start && arr[mid-1] == target){
            return mid-1;
        }
        if(mid+1<= end && arr[mid+1] == target){
            return mid + 1;

        }
        else if(target>arr[mid]){
            start= mid + 2;
        }
        else{
            end=mid-2;
        }
        mid=start+(end-start)/2;
    }
    return -1;
    
}

int main(){
    vector<int>arr{10,3,40,20,50,80,70};
    int target=70;
    int size=arr.size()-1;


   
   int findTarget=getTarget(arr,size,target);
   cout<<"The index is : "<<findTarget<<endl;
}