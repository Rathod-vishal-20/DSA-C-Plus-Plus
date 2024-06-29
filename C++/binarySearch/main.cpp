#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

// int binartSearch(int arr[], int target ,int size){
//         int start=0;
//         int end =size-1;
//         int mid = start +( end -start)/2;

//         while(start <= end){
//             int element = arr[mid];
//             if(element == target){
//                 return mid;
//             }
//             else if(target < element){
//                 end=mid - 1;
//             }
//             else
//             {
//                 start = mid + 1;
//             }
//             mid = start +( end -start)/2;
//         }
//         return -1;  
// }
// int main(){
    
//     vector<int>arr{1,2,3,4,5,6};
//     if(binary_search(arr.begin(),arr.end(), 3)){
//         cout<<"Found"<<endl;
//     }
//     else{
//         cout<<"Not found"<<endl;
//     }

//     return 0;
// }

int binarySearch(vector<int>arr, int size , int target){
    int start=0;
    int end= size-1;
   int mid= start +(end-start)/2;

   while(start<=end){

    int element=arr[mid];

    if(element == target){
        return mid;
    }
    else if(element < target){
        start = mid+1;
    }
    else{
        end=mid-1;
    }
    mid=start +(end - start)/2;
   }
   return -1;
}

int main(){
    vector<int>arr{
        1,2,3,4,5,6};
        int target=25;
        int size=arr.size();

        if(binarySearch(arr,size,target) == -1){
            cout<<"Not Found";
        }else{
            cout<<" Found";
        }
        return 0;
    }
