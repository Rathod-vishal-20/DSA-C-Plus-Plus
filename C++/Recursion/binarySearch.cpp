#include<iostream>
#include<vector>
using namespace std;


    int binarySearch(vector<int>v, int target, int end , int start){
     
        if(start > end ){
            return -1;
        }
        int mid = start + (end - start) / 2;
        if(v[mid] == target){
            return mid;
        }
        
        if(v[mid] < target){
           return binarySearch(v, target , end , mid+1);
        }
        else{
            return binarySearch(v,target,mid-1,start);
        }
    

    }
int main(){
    vector<int>v{10,20,30,40,50,60,90,99};
    int target = 90;
    int n = v.size();
    int start=0;
    int end = n-1;
    int ans = binarySearch(v,target,end, start );

    cout<<"Answer is : " <<ans <<endl;

}