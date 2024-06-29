#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]= {1,2,3,4};
    int sizea=4;
    int brr[]={3,4,9,10};
    int sizeb=4; 

    vector<int>crr;
    for(int i =0; i<sizea; i++){
        
        for(int j=0; j<sizeb ; j++){

             if(arr[i] == brr[j]){
                brr[j]=-1;
                crr.push_back(arr[i]);
             }
        }
    }

    for(int i=0; i<crr.size() ; i++){
        cout<<crr[i]<<" ";
    }
    return 0;

    
}