#include<iostream>
#include<vector>
using namespace std;

    vector<int> searchRange(vector<int>nums , int target){
        vector<int>index{-1,-1};
        int start=0;
        int end=nums.size()-1;
        int mid=start + (end - start)/2;
        int firstOcc=-1;
        int lastOcc=-1;
        while(start<=end){
            // for first occ
          if(nums[mid] == target){
            firstOcc=mid;
            end=mid-1;
          }
          else if(nums[mid] < target){
            start=mid+1;
          }
          else{
            end=mid-1;
          }
         mid=start + (end - start)/2; 
        } 

         
         start=0;
         end=nums.size()-1;
         mid=start + (end - start)/2;
        while(start<=end){
            if(nums[mid] == target){
            lastOcc=mid;
            start=mid+1;
        }
        else if(nums[mid] < target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
          mid=start + (end - start)/2;
        }
         cout<<"last"<<lastOcc<<endl;
        index[0]=firstOcc;
        index[1]=lastOcc;

        return index;
       
    }

int main(){
    vector<int>nums{5,7,7,8,8,10};
    int target=8;
    vector<int>ans=searchRange(nums,target);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}