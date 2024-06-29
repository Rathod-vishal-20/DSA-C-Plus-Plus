#include<iostream>
#include<vector>
using namespace std;

int findAns(vector<int>arr){
    int start=0;
    int end=arr.size();
    int mid = start + (end-start)/2;
    while(start<=end){
        if(start == end){
            return start;
        }
        if(arr[mid] % 2 == 0  ){
            if(arr[mid] == arr[mid+1]){
                start=mid+2;
            }
            else{
                end=mid;
            }
        }
        else{
            if(arr[mid]!=0){
                if(arr[mid] == arr[mid-1]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        mid=start+(end - start)/2;
    }

}

int main(){
    vector<int>arr{1,1,2,2,3,3,4,4,5,5,6,6,7,8,8,9,9,10,10};
    int ans=findAns(arr);
    cout<<"This is the index" <<ans<<endl;
    cout<<"This is the value"<<arr[ans];
    return 0;
}