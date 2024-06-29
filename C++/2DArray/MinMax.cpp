#include<iostream>
#include<limits.h>

using namespace std;

int getMax(int arr[][3] ,int row , int col){
    int max=INT_MIN;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] > max){
                max=arr[i][j];
            }
        }
    }
    return max;

}

int getMin(int arr[][3] ,int row , int col){
    int min=INT_MAX;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] < min){
                min=arr[i][j];
            }
        }
    }
    return min;

}



int main(){
    int arr[3][3]=
    {{3,4,5},
    {7,6,4},
    {8,6,2}};
    int row=3;
    int col=3;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int maxNum=getMax(arr,row,col);

    cout<<"Maximum no is : "<<maxNum<<" " <<endl;

    int minNumber= getMin(arr,row,col);
    cout<<"Minimum no is : "<<minNumber<< " ";
}