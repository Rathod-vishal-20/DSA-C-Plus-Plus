#include<iostream>
#include<vector>
using namespace std;

    int solve(vector<int>arr){
        int start=0;
        int end=arr.size()-1;
        int mid=start + (end - start)/2;
        while(start<=end){
            //1: single element
            if(start == end){
                return start;
            }
            //2: mid is even 
            if(mid % 2 == 0){
            if(arr[mid] == arr[mid]+1){
                start=mid + 2;
            }
            else{
                end=mid;
            }
            }
            else{
             if(arr[mid] == arr[mid-1]){
                start= mid + 1;
             }
             else{
                end= mid -1;
             }   
            }
            mid=start + (end - start)/2;
        }
        return -1;
    }

int main(){
    vector<int>arr{1,1,2,2,3,3,4,4,3,600,600};
    int ans= solve(arr);
    cout<<"index is : "<<ans <<endl;
    cout<<"value is : "<<arr[ans] << endl;
}