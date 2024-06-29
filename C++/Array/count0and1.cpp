#include<iostream>
using namespace std;



int main(){

        // Babbar bhaiya Oneside

    int arr[] = { 0,1,0,1,0,1,0,1,0,1,1,1,0};
    int size=13;

    int numZero = 0;
    int numOne =0;

    for(int i=0; i<size; i++){
        if(arr[i] == 0){
            numZero= numZero +1;
        }
       if(arr[i] == 1 ){
        numOne = numOne +1;
       }
    }
    cout<<"NumOf Zero : " << numZero << endl;
    cout<<"NumOf One : " << numOne << endl;



    //// My practice
    // int arr[] = {1,2,1,0,1,2,0,0,1,0,1,00,11,0,1,0,1};
    // int size = 17;

    // int zeroCount = 0;
    // int OnesCount=0;

    // for(int i=0; i<size; i++){
    //     if(arr[i] == 0){
    //         zeroCount = zeroCount +1;
    //     }
    //     if(arr[i] == 1){
    //         OnesCount = OnesCount + 1;
    //     }
    // }

    // cout<<"One is : "<<OnesCount << endl;
    // cout<<"Zeros are : "<<zeroCount ; 

}
