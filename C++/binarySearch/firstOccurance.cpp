#include<iostream>
using namespace std;
#include<vector>


int firstOccurance(vector<int>arr,  int target){
    int start=0;
    int end= arr.size() - 1;
    // cout<<end;
    int mid=start + (end - start)/2;
    int ans=-1;
    while(start<=end){
        
       if(arr[mid] == target){
        ans= mid;
        end=mid-1;
       }
       else if(target > arr[mid]){
        start= mid + 1;
       }
       else if(target < arr[mid]){
        end= mid -1;
       }
       mid=start + (end - start)/2;
    }
    return ans;
}

int main(){
    //  vector<int>arr{1,3,3,3,4,4,5,6,2,4,4};
    vector<int>arr{2,3,4,4,4,4,4,4,4};
     
     int target=4;
    //  int echh = arr.size()-1;
    //  cout<<"size is :" << echh <<endl;

     int indexOfFirst=firstOccurance(arr,target);
     cout<<indexOfFirst<<endl;
     return 0;
}