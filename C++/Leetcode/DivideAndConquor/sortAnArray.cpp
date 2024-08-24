#include<iostream>
#include<vector>
using namespace std;

 void   merge(vector<int>&nums, int start, int end){
        int mid = start +(end - start)/2;

        int len1=mid - start+1;
        int len2=end-mid;

        int* left = new int[len1];
        int* right = new int[len2];

        int k = start;
        for(int i=0; i<len1; i++){
            left[i]=nums[k];
            k++;
        }

        k=mid+1;
        for(int i=0; i<len2; i++){
            right[i]=nums[k];
            k++;
        }

        int leftIndex=0;
        int rightIndex=0;
        int mainIndex=start;

        while(leftIndex < len1 && rightIndex < len2){
            if(left[leftIndex] < right[rightIndex]){
                nums[mainIndex] = left[leftIndex];
                mainIndex++;
                leftIndex++;
            }
            else{
                nums[mainIndex] = right[rightIndex];
                mainIndex++;
                rightIndex++;
            }
        }

        while(leftIndex < len1){
            nums[mainIndex] = left[leftIndex];
            mainIndex++;
            leftIndex++;
        }
        while(rightIndex<len2){
            nums[mainIndex] = right[rightIndex];
            mainIndex++;
            rightIndex++;
        }
    }

void  mergeSort(vector<int>&nums, int start, int end){
        if(start>=end){
            return ;
        }
 
        int mid=start+(end-start)/2;

        mergeSort(nums,start,mid);
        mergeSort(nums,mid+1,end);

        merge(nums,start,end);
}

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;

        
        
    }

int main(){
    vector<int>nums{5,2,3,1};
    sortArray(nums);
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}