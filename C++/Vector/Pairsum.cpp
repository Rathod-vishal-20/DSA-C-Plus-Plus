#include<iostream>
#include<vector>
using namespace std;

int main(){
     vector<int>arr{1,3,5,7,2,4,6};
    // vector<int>arr{10,20,40,60,70};
    int sum = 9;

    for(int i=0; i<arr.size(); i++){
        int element = arr[i];
        for(int j=1+i; j<arr.size(); j++){
            
                if((arr[i]+arr[j]) == sum){
                    cout<< "("<<arr[i] <<","<< arr[j] <<")"<<endl;
                }
                
            
          
        }
        
    }
}