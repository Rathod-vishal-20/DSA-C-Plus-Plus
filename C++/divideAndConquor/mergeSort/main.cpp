#include<iostream>
using namespace std;

void merge(int* arr, int start, int end){
    int mid=start + (end - start)/2;

    int len1  = mid - start + 1;
    int len2 = end - mid;

// assume to be created 
    int* left = new int[len1];
    int* right = new int[len2];

    // copy the values 
    int k = start;
    for(int i=0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }

    k= mid+1;
    for(int i=0; i<len2; i++){
        right[i]=arr[k];
        k++;
    }


    // merge logic
    int leftIndex=0;
    int rightIndex=0;
    int mainIndex=start;
    
    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainIndex] = left[leftIndex];
            mainIndex++;
            leftIndex++;

        }
        else{
            arr[mainIndex] = right[rightIndex];
            mainIndex++;
            rightIndex++;
        }
    }

    // copy logic for left array;
    while(leftIndex < len1){
        arr[mainIndex] = left[leftIndex];
        mainIndex++;
        leftIndex++;
    }

    while(rightIndex < len2){
        arr[mainIndex] = right[rightIndex];
        mainIndex++;
        rightIndex++;
    }


}

void mergeSort(int* arr, int start, int end){
    if(start >= end){
        return;
    }
    int mid = start + (end - start) / 2;

    // left part
    mergeSort(arr,start,mid);

    // right part
    mergeSort(arr,mid+1,end);
    // merger to sorted array;
    merge(arr,start,end);

}

int main(){
    int arr[5] = {4,5,13,2,12};
    int n=5;
    int start=0;
    int end = n-1;
    mergeSort(arr,start,end);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}