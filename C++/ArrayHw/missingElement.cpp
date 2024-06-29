#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,2,3,4,5,6,7,8,9,10,12};
    int size=arr.size();
    int start=0;
    int next=1;


    for(int i=0; i<size; i++){
        if(arr[i]+1 == arr[next]){
           next++; 
        }
        else if(arr[i]+1 != arr[next]){
            cout<<"Missing element is: "<<arr[i]+1;
            break;
        }
  
}
  return 0;
}