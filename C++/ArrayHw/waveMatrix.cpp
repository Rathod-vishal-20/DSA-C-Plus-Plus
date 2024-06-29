
#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

void waveprintMatrix(vector<vector<int>>arr){
    int m=arr.size();
    int n=arr[0].size();

    for(int startcol=0; startcol<n; startcol++){
        if(startcol % 2 ==0){
            for(int i =0 ; i<m ; i++){
                cout<<arr[i][startcol] <<" ";

            }
            cout<<endl;
        }
        else{
            for(int i=m-1; i>=0 ; i--){
                cout<<arr[i][startcol]<<" ";
            }
             cout<<endl;
        }
    }
}

int main(){
    vector<vector<int>>arr{
        
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
    
};
 waveprintMatrix(arr);
 
    
  




   
}