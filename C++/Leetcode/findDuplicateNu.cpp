#include<iostream>
#include<vector>

#include <algorithm>

using namespace std;

int main(){
    vector<int>arr{1,3,4,2,2};
    int low=0;
    int high=arr.size()-1;
   sort(arr.begin(),arr.end());
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Duplicate
    cout<<"Duplicate is : "<<endl;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==arr[i+1]){
            cout<<arr[i];
        }
    }

}