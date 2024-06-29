#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{3,2,3};
    int size=arr.size();
    int target= 6;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
        if(arr[i]+arr[j] == target){
            cout<<"["<<i<<","<<j<<"]"<<endl;
        }
        }
    }
    return 0;
}