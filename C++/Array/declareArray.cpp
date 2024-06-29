#include<iostream>
using namespace std;


    void printArray(int arr[] , int size){
        for(int i=0; i<size ; i++){
            cout<<arr[i] <<" ";
        }
        cout<<endl;
    }

    void inc( int arr[] ,int size){
        arr[0] = arr[0] + 10;
       printArray(arr, size);
    }

int main(){


    // trying function in array
    int arr[] ={5,6};
    int size = 2;
    inc(arr, size);

    printArray(arr , size);




    // // int arr[7];
    // int arr[] = {2,5};
    // // char arr[106];
    // // bool arr[23];
    // cout<<&arr<<endl;
    // cout<<"Array Created Successfully"<<endl;
    // cout<<arr << endl;

    // array initialise
    // int arr[] = {2,5,6,6,5,4,94};
    
    // for(int i=0; i<7 ; i++){
    //     cout<<arr[i] << " ";
    // }


    // Taking input from the array
    // int arr[10];
    // cout<<"Enter the input the values in the array";

    // for(int i=0; i<10  ; i++){
    //     // int n;
    //     // cin>>n;
    //     // arr[i]= n;
    //     cin>>arr[i];

    // }

    // cout<<" Printing the Array data";
    // for(int i=0; i<10 ; i++){
    //     cout<<arr[i]<<" ";
    // }

    // int arr[5];
    // for(int i=0 ; i<5 ; i++){
    //     cin>>arr[i];
    // }
    // for(int i=0; i<5 ; i++){
    //     cout<<arr[i] << " ";
    // }

    // printing the doubles
    // int arr[500];
    // int n;
    // cout<<" How many numbers you want to add : " ;
    // cin>>n;

    // cout<<"Entet the numbers : ";
    
    // for(int i=0 ; i<n ; i++){
    //    cin>>arr[i];

    // }

    // int arr[] = {1,3,5,7,9};
    // for(int i=0; i<n ; i++){
    //     if(arr[i] != 1){
    //     arr[i] = 1;
    //     cout<< arr[i] <<" ";
    //     }
    //     else{
    //         cout<<arr[i] << " ";
    //     }
 
    
    // }


    // replacing other value by 1

    // int arr[5] = {1 ,5,8,9,7};

    // for(int i = 0; i<5 ; i++){
    //     arr[i]=1;
    // }

    // for(int i=0; i<5 ; i++){
    //     cout<<arr[i] <<" ";
    // }

    // return 0;


    

}