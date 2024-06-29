#include<iostream>
using namespace std;
#include<vector>

bool getElement(int arr[5][4], int row , int col, int target){
    int start=0;
    int end=row*col-1;
    int mid=start +(end - start)/2;
   
    //int element = arr[indexRow][indexCol];
    
    while(start<=end){
         int indexRow=mid/col;
        int indexCol=mid%col;
        if(arr[indexRow][indexCol] == target){
            cout<<"Found at : "<<indexRow<<" "<<indexCol<<endl;
            return true;
        }
        else if(arr[indexRow][indexCol] > target){
            end= mid-1;
        }
        else{
            
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return false;
}
int main(){
    int arr[5][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };

    int row=5;
    int col =4;
    int target=21 ;
    bool ans=getElement(arr,row,col,target);
    if(ans){
        cout<<" Found";

    }
    else{
        cout<<" Not found";
    }
    return 0; 
}