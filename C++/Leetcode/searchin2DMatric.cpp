#include<iostream>
#include<vector>
using namespace std;

bool findTarget(vector<vector<int>>arr, int key){
    int row=arr.size();
    int col=arr[0].size();
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] == key){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<vector<int>>arr{
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };
    int key=35;
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[0].size(); j++){
            cout<<arr[i][j]<<" ";
        }
    }

    bool target= findTarget(arr,key);
    if(target){
        cout<<" Found"<<" ";
    }
    else{
        cout<<"Not Found"<<" ";
    }
}
